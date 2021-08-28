#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream, std::istream;

class Array
{
  // cout << obj
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);
public:
  Array( int = 10 );    //construtor-padrÃ£o
  Array(const Array &); //construtor de cÃ³pia
  ~Array();             //destrutor

  int getSize() const;

  
  const Array &operator=( const Array & ); //operador atribuiÃ§Ã£o. "const Array &" evita algo como (a = b) = c

  //======
  Array operator+(const Array &) const;
  const Array& operator+=(const Array &);
  //======

  bool operator==( const Array & ); //operador de igualdade

  bool operator!=( const Array &dir)
  {
    return !(*this == dir);
  }

  int &operator[](int); //permite modificar o elemento
  int operator[](int) const; //nÃ£o permite modificar o elemento

private:
  int tam;
  int *arr;
};

#endif
