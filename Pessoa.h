#ifndef PESSOA_H
#define PESSOA_H 

#include <string>
using std::string;

class Pessoa 
{
public:
  Pessoa(string nome = "Fulano", int idade = 0, float altura = 0.0f);

  Pessoa &setNome(const string &);
  Pessoa &setIdade( int );
  Pessoa &setAltura( float);

  const string &getNome() const {return nome;}
  int getIdade() const {return idade;}
  float getAltura() const {return altura;}

  void print() const;

private:
  string nome;
  int idade;
  float altura;
};

#endif
