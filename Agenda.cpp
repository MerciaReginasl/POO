#include "Agenda.h"

#include <string>
using std::string;

#include <iostream>
using std::cout, std::endl;

Agenda::Agenda(int tPessoas)
{
  qtdePessoas = (tPessoas > 0) ? tPessoas : 1;
  pessoas = new Pessoa[qtdePessoas];
  pos = 0;
}

Agenda::~Agenda()
{
  delete [] pessoas;
}

void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
  if (pos < qtdePessoas)
    pessoas[pos++] = Pessoa(nome,idade,altura);
}

void Agenda::armazenaPessoa(const Pessoa &p)
{
  if (pos < qtdePessoas)
    pessoas[pos++] = p;
}

void Agenda::removePessoa(string nome)
{
  int p = buscaPessoa(nome);

  if (p == -1)
    return;
  
  for (int i = p ; i < pos - 1 ; i++)
    pessoas[p] = pessoas[p+1];
  
  pos--;
}

int Agenda::buscaPessoa(string nome) const
{
  for (int i = 0 ; i < pos ; i++)
    if (pessoas[i].getNome() == nome)
      return i;
  
  return -1;
}

void Agenda::imprimePovo() const
{
  for (int i = 0 ; i < pos ; i++)
  {
    pessoas[i].print();
    cout << endl;
  }
}

void Agenda::imprimePessoa(int i) const
{
  if (i < 0 || i >= pos)
    cout << "Erro. Fora de faixa." << endl;
  
  pessoas[i].print();
  cout << endl;
}
