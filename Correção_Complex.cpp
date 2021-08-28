#include <iostream>
using std::cout, std::endl, std::ostream;

#include "Complex.h"

ostream &operator<<(ostream &out, const Complex &c)
{
  out << c.real << (c.imaginaria >= 0 ? " +" : " ") << c.imaginaria << "*i";
  return out;
}

Complex Complex::operator+(const Complex &c) const
{
  Complex res;

  res.real = this->real + c.real;
  res.imaginaria = this->imaginaria + c.imaginaria;

  return res;
}

Complex Complex::operator-(const Complex &c) const
{
  Complex res;

  res.real = this->real - c.real;
  res.imaginaria = this->imaginaria - c.imaginaria;

  return res;
}

const Complex &Complex::operator+=(const Complex &c)
{
  *this = *this + c;
  return *this;
}

const Complex &Complex::operator-=(const Complex &c)
{
  *this = *this - c;
  return *this;
}

const Complex &Complex::operator++()
{
  this->real++;
  return *this;
}

Complex Complex::operator++(int)
{
  Complex ant = *this;

  this->real++;

  return ant;
}

const Complex &Complex::operator--()
{
  this->real--;
  return *this;
}

Complex Complex::operator--(int)
{
  Complex ant = *this;
  
  this->real--;

  return ant;
}
