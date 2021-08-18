//Correção Questão 9

#include "HugeInteger.h"

#include <iostream>
using std::cout, std::endl;

#include <cstring>
#include <cctype>

#define MAX(a,b) ((a>b)?a:b)

HugeInteger::HugeInteger(const char *n)
{
  input(n);
}


void HugeInteger::input(const char *n)
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
}

void HugeInteger::output() const
{
  for (int i = tam - 1 ; i >= 0 ; i--)
    cout << num[i];
  
}

void HugeInteger::add(const HugeInteger &n2)
{
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
    num[i] = (tRes % 10) + '0';
  }

  tam = MAX(tam,n2.tam);

  if (vaiUm)
    num[tam++] = vaiUm + '0';

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

bool HugeInteger::isEqualTo(const HugeInteger &n2) const
{
  if (tam != n2.tam)
    return false;
  
  for (int i = 0 ; i < tam ; i++)
    if (num[i] != n2.num[i])
      return false;

  return true;
}

bool HugeInteger::isGreaterThan(const HugeInteger &n2) const
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
