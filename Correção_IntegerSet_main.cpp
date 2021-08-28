#include <iostream>
using std::cout, std::endl;

#include "IntegerSet.h"

int main() {
  IntegerSet set1;

  int arr[] = {10,20,50};
  IntegerSet set2(arr,3);

  set1 << 10 << 50;


  cout << set1 << endl << set2 << endl;


  IntegerSet set3 = set1 | set2;
  IntegerSet set4 = set1 & set2;

  cout << set1 << endl << set2 << endl;

  return 0;
}
