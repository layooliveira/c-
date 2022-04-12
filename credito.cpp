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
	float saldo, credito, liberado;
	cout << "informe o saldo medio" << endl;
	cin >> saldo;
	if (saldo <= 200){
		credito = 0;
	} else if (saldo > 200 & saldo < 401) {
		credito = 0.2;
	} else if (saldo > 400 & saldo < 601) {
		credito = 0.3;
	} else if (saldo > 600){
		credito = 0.4;
	}
	liberado = saldo * credito;
	cout << "o cliente tem um credito disponível no total de " << liberado;
	
 	
			return 0;
}
