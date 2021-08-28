#include <iostream>
using std::cout, std::endl;

#include "Complex.h"

int main() {
  Complex num1(10,-1);
  Complex num2(5,3);

  cout << "C1: " << num1 << endl;
  cout << "C2: " << num2 << endl;

  cout << "\nC1 + C2 = " << (num1 + num2) << endl;

  cout << "\nC1 - C2 = " << (num1 - num2) << endl;

  num1 += Complex(5,-1);

  cout << "\nC1 += 5 -1*i" << endl;

  cout << "C1 => " << num1 << endl; 

  cout << "++C2 => " << ++num2 << endl;

  return 0;
}
