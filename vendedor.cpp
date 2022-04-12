#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

// 10 - O sistema de avaliação de determinada disciplina é composto por três provas. A primeira prova tem peso 2, a segunda  prova tem peso 4 e a terceira prova tem peso 6.
//Faca um algoritmo para calcular a media final de um aluno, sendo que o cálculo é de forma ponderada, ou seja, a soma das notas, deve ser dividido pela soma dos pesos aplicado as notas.

int main() {
	setlocale(LC_ALL,"Portuguese");
	cout << fixed << setprecision(1);
	float fixo, venda, percento, bonif, total;
	string nome;
	
	cout << "Informe o nome" << endl;
	cin >> nome;
	cout << "Informe o salário fixo" << endl;
	cin >> fixo;
	cout << "Informe o total de vendas" << endl;
	cin >> venda;
	cout << "Informe sua comissão" << endl;
	cin >> percento;
	bonif = (venda*percento)/100;
	total = fixo+bonif;
	cout << "Olá " << nome << ", o seu salário total é R$" << total;
	
	return 0;
}
