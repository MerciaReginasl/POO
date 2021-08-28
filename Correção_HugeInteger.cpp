#include "HugeInteger.h"

#include <iostream>
using std::cout, std::endl, std::ostream;

#include <cstring>
#include <cctype>

#define MAX(a,b) ((a>b)?a:b)

ostream &operator<<(ostream &out, const HugeInteger &hi)
{
  for (int i = hi.tam - 1 ; i >= 0 ; i--)
    out << hi.num[i];
  return out;
}

HugeInteger::HugeInteger(const char *n)
{
  *this = n;
}

const HugeInteger &HugeInteger::operator=(const char *n)
{
  if (validar(n))
  {
    tam = strlen(n);

    //armazenando nÃºmero ao contrÃ¡rio
    for (int i = strlen(n)-1 ; i >=0 ; i--)
      num[tam - i - 1] = n[i];
  }
  else
  {
    tam = 1;
    num[0] = '0';
  }

  return *this;
}

HugeInteger HugeInteger::operator+(const HugeInteger &n2) const
{
  HugeInteger hiRes;
  int vaiUm = 0, num1, num2, tRes;
  
  for (int i = 0 ; i < MAX(tam,n2.tam) ; i++)
  {
    //converte para inteiros
    num1 = (i < tam) ? num[i] - '0' : 0;
    num2 = (i < n2.tam) ? n2.num[i] - '0' : 0;

    //soma
    tRes = num1 + num2 + vaiUm;

    //calcula o vai um
    vaiUm = tRes / 10;

    //calcula o valor que fica
    hiRes.num[i] = (tRes % 10) + '0';
  }

  hiRes.tam = MAX(tam,n2.tam);

  if (vaiUm)
    hiRes.num[hiRes.tam++] = vaiUm + '0';

  return hiRes;
}

const HugeInteger &HugeInteger::operator+=(const HugeInteger &hi)
{
  *this = *this + hi; 
  return *this;
}

bool HugeInteger::validar(const char *n)
{
  if (strlen(n) == 0 || strlen(n) > 40)
    return false;

  for (int i = 0 ; i < strlen(n) ; i++)
    if (!isdigit(n[i]))
      return false;
  
  return true;
}

bool HugeInteger::operator==(const HugeInteger &n2) const
{
  if (tam != n2.tam)
    return false;
  
  for (int i = 0 ; i < tam ; i++)
    if (num[i] != n2.num[i])
      return false;

  return true;
}

bool HugeInteger::operator>(const HugeInteger &n2) const
{
  if (tam > n2.tam)
    return true;
  
  if (tam < n2.tam)
    return false;
  
  for (int i = tam - 1 ; i >= 0 ; i--)
  { 
    if (num[i] < n2.num[i])
      return false;

    if (num[i] > n2.num[i])
      return true;
  }
  
  return false;
}
