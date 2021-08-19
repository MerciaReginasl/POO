#ifndef AGENDA_H
#define AGENDA_H

#include "Pessoa.h"

#include <string>
using std::string;

class Agenda{
public:
  Agenda(int tPessoas = 1);
  ~Agenda();
  void armazenaPessoa(string nome, int idade, float altura);
  void armazenaPessoa(const Pessoa &p);

  void removePessoa(string nome);

  int buscaPessoa(string nome) const; // informa em que posiÃ§Ã£o da agenda estÃ¡ a pessoa
  void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
  void imprimePessoa(int i) const; // imprime os dados da pessoa que estÃ¡ na posiÃ§Ã£o 'i' da agenda
private:
  Pessoa *pessoas;
  int qtdePessoas;
  int pos;
};

#endif
