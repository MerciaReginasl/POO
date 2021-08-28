#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using std::ostream;

class Complex 
{
  //=====
  friend ostream &operator<<(ostream &out, const Complex &);
  //=====
public:
  Complex(int a = 0, int b = 0)
  {
    real = a;
    imaginaria = b;
  }

  //=====
  const Complex &operator+=(const Complex &);
  const Complex &operator-=(const Complex &);

  Complex operator+(const Complex &) const;
  Complex operator-(const Complex &) const;

  const Complex &operator++(); //pre-fixado
  Complex operator++(int);     //pos-fixado

  const Complex &operator--(); //pre-fixado
  Complex operator--(int);     //pos-fixado

  //=====

private:
  double real;
  double imaginaria;
};

#endif
