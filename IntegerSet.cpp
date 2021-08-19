//Correção Questão 11

#include "IntegerSet.h"

#include <iostream>
using std::cout, std::endl;

IntegerSet unionOfSets(const IntegerSet &is1, const IntegerSet &is2)
{
  IntegerSet unionSet;

  for (int i = 0 ; i < 100 ; i++)
    unionSet.nums[i] = is1.nums[i] || is2.nums[i];
  
  return unionSet;
}

IntegerSet intersectionOfSets(const IntegerSet &is1, const IntegerSet &is2)
{
  IntegerSet intersectionSet;

  for (int i = 0 ; i < 100 ; i++)
    intersectionSet.nums[i] = is1.nums[i] && is2.nums[i];
  
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

void IntegerSet::insertElement(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 1;
}

void IntegerSet::deleteElement(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 0;
}

void IntegerSet::print() const
{
  cout << "[ ";
  for (int i = 0 ; i < 100 ; i++)
    if (nums[i])
      cout << i << " ";
  cout << "]" << endl;
}

void IntegerSet::setZeros()
{
  for (int i = 0 ; i < 100 ; i++)
    nums[i] = 0;
}
