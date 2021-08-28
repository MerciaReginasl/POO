#include "IntegerSet.h"

#include <iostream>
using std::cout, std::endl, std::ostream;

IntegerSet IntegerSet::operator|(const IntegerSet &is) const
{
  IntegerSet unionSet;

  for (int i = 0 ; i < 100 ; i++)
    unionSet.nums[i] = this->nums[i] || is.nums[i];
  
  return unionSet;
}

IntegerSet IntegerSet::operator&(const IntegerSet &is) const
{
  IntegerSet intersectionSet;

  for (int i = 0 ; i < 100 ; i++)
    intersectionSet.nums[i] = this->nums[i] && is.nums[i];
  
  return intersectionSet;
}


IntegerSet::IntegerSet()
{
  setZeros();
}

IntegerSet::IntegerSet(int *inteiros, int tam)
{
  setZeros();
  for (int i = 0 ; i < tam ; i++)
    nums[inteiros[i]] = 1;
}

IntegerSet &IntegerSet::operator<<(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 1;
  
  return *this;
}

IntegerSet &IntegerSet::operator>>(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 0;
  
  return *this;
}

ostream &operator<<(ostream &out, const IntegerSet &is)
{
  cout << "[ ";
  for (int i = 0 ; i < 100 ; i++)
    if (is.nums[i])
      cout << i << " ";
  cout << "]";
  return out;
}

void IntegerSet::setZeros()
{
  for (int i = 0 ; i < 100 ; i++)
    nums[i] = 0;
}
