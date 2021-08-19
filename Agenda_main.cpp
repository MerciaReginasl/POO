#include <iostream>

#include "Agenda.h"

int main()
{
  Agenda ag(5);
  ag.armazenaPessoa(Pessoa("Victor",33,1.65));
  ag.armazenaPessoa(Pessoa("Joao",40,2));
  ag.armazenaPessoa(Pessoa("Karla",30,1.6));

  ag.imprimePovo();

  ag.removePessoa("Joao");

  ag.imprimePovo();

  return 0;
}
