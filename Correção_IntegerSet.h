#ifndef INTEGER_SET_H
#define INTEGER_SET_H 

#include <iostream>
using std::ostream;

class IntegerSet 
{
//======
  friend ostream &operator<<(ostream &, const IntegerSet &);
//======
public:
  IntegerSet();
  IntegerSet(int *, int );

  //=======

  IntegerSet &operator<<(int);
  IntegerSet &operator>>(int);

  IntegerSet operator|(const IntegerSet &) const;
  IntegerSet operator&(const IntegerSet &) const;


  //=======


private:

  int nums[100];
  void setZeros();
};

#endif
