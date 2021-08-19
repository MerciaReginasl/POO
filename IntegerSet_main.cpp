#include <iostream>

#include "IntegerSet.h"

int main() {
  IntegerSet set1;

  int arr[] = {10,20,50};
  IntegerSet set2(arr,3);

  set1.insertElement(10);
  set2.deleteElement(50);


  set1.print();
  set2.print();


  IntegerSet set3 = unionOfSets(set1,set2);
  IntegerSet set4 = intersectionOfSets(set1,set2);

  set3.print();
  set4.print();

  return 0;
}
