//** Usando a biblioteca C++, escreva um programa que leia o primeiro nome e 3 
//notas notas de um aluno, e exiba na tela a média ponderada, com pesos 3,4 e 5,
//respectivamente, das notas 1, 2 e 3.**//

#include <iostream>
#include <string>

using namespace std;

int main() {
	
 float n1, n2, n3;
 float media;
 
 string nome (" FULANO " );
 
 cout << "Aluno"  << nome << "obteve as seguintes notas: " << endl;

 cout <<"Digite as 3 notas: \n";
 
 cout << "Digite a n1: ";
 cin >> n1;

 cout << "Digite a n2: ";
 cin >> n2;
 
 cout << "Digite a n3: ";
 cin >> n3;

 media = (3*n1 + 4*n2 + 5*n3) / 10; //média ponderada

 cout << "O aluno FULANO obteve media: " << media;

 return 0;
