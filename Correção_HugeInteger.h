#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <iostream>
using std::ostream;

class HugeInteger
{
  //====
  friend ostream &operator<<(ostream &, const HugeInteger &);
  //====
public:
  HugeInteger(const char * = "");

  //====
  const HugeInteger &operator=(const char *);

  HugeInteger operator+(const HugeInteger &) const;
  const HugeInteger &operator+=(const HugeInteger &);

  bool operator==(const HugeInteger &) const;
  bool operator!=(const HugeInteger &n2) const {
    return !(*this == n2);
  }

  bool operator>(const HugeInteger &) const;
  bool operator<(const HugeInteger &n2) const{
    return n2 > *this;
  }

  bool operator>=(const HugeInteger &n2) const{
    return !(n2 > *this);
  }

  bool operator<=(const HugeInteger &n2) const{
    return !(*this > n2);
  }

  //====
  

private:
  char num[40];
  int tam;

  bool validar(const char *);
};


#endif
