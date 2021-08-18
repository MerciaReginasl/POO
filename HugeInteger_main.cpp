//Correção Questão 9

#include <iostream>
using std::cout, std::endl;

#include "HugeInteger.h"

int main() {
  HugeInteger hi1("7974659841356841539846513");
  HugeInteger hi2("9784651239846519784651679465134651");

  cout << "hi1 = "; 
  hi1.output();
  cout << endl << "hi2 = ";
  hi2.output();
  cout << endl;

  hi1.add(hi2);
  cout << "hi1 += hi2" << endl << "hi1 = ";
  hi1.output();

  cout << endl << endl;

  HugeInteger hi3 = "123456789";
  HugeInteger hi4 = "123456789";

  if (hi3.isEqualTo(hi4))
    cout << "hi3 e hi4 sÃ£o iguais" << endl;
  else
    cout << "hi3 e hi4 nÃ£o sÃ£o iguais" << endl;

  HugeInteger hi5 = "87654321";
  HugeInteger hi6 = "76543210";

  if (hi5.isGreaterThan(hi6))
    cout << "hi5 eh maior que hi6" << endl;
  else
    cout << "hi5 nÃ£o eh maior que hi6" << endl;

  return 0;
}
