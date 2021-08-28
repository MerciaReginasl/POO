#include <iostream>
using std::cout, std::endl;

#include "HugeInteger.h"

int main() {
  HugeInteger hi1("7974659841356841539846513");
  HugeInteger hi2("9784651239846519784651679465134651");

  cout << "hi1 = " << hi1 << endl;
  cout << "hi2 = " << hi2 << endl;

  hi1 += hi2;
  cout << "hi1 += hi2" << endl << "hi1 => " << hi1 << endl << endl;

  HugeInteger hi3 = "123456789";
  HugeInteger hi4 = "123456789";

  if (hi3 == hi4)
    cout << "hi3 e hi4 são iguais" << endl;
  else
    cout << "hi3 e hi4 não são iguais" << endl;

  HugeInteger hi5 = "87654321";
  HugeInteger hi6 = "76543210";

  if (hi5 > hi6)
    cout << "hi5 eh maior que hi6" << endl;
  else
    cout << "hi5 não eh maior que hi6" << endl;

  return 0;
}
