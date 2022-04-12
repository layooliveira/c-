#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main() {
	setlocale (LC_ALL, "Portuguese");
	cout << fixed << setprecision(1);
	int i;
	float nota[7], media, soma;
	string nome[7];

	for (i=0; i<=6; i++){
		cout << "Informe o nome do aluno " << endl;
		cin >> nome[i];
		cout << "Informe a nota " << endl;
		cin >> nota[i];
		soma = soma + nota[i];
	}
	media = soma/7;
	for (i=0; i<=6; i++){
		if (nota[i] > media){
			cout << "O aluno " << nome[i] << " teve a nota maior que a média" << endl;
		}
	}
	return 0;
}
