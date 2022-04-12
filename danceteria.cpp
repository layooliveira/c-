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
	float vlpag, vltot;
	int i, tipo, qtd, qtdcerva, qtdrefri, qtdagua = 0;
while (i < 4) {
	cout<< "informe o tipo de bebida, 1 para cerveja, 2 para refri, 3 para agua" << endl;
	cin >> tipo;	cout << "informe a quantidade" << endl;
	cin >> qtd;
	vlpag = 0;
	if (tipo == 1 ){
		vlpag = qtd * 10;
		qtdcerva = qtdcerva+qtd;
	} else if (tipo == 2){
		vlpag = qtd * 5;
		qtdrefri = qtdrefri+qtd;	
	} else if (tipo == 3){
		vlpag = qtd * 4;
		qtdagua = qtdagua+qtd;
	}
	i++;
	vltot = vltot + vlpag;	
}
	cout << "Foram vendidas " << qtdcerva << " cervejas, " << qtdrefri << " refrigerantes, " << qtdagua << " águas. A danceteria arrecadou um total de R$" << vltot;
}
