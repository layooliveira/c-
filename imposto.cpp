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
	float renda , imposto , valor;
	cout << "informe sua renda anual" << endl;
	cin >> renda;
	if (renda <= 10000){
		imposto = 0;	
	} else if (renda > 10000 & renda <= 25000){
		imposto = 0.1;
		} else if (renda > 25000){
			imposto = 0.25;
		}
	valor = (renda * imposto);
	
	cout << "você paga um total de " << valor;
	

	return 0;
}
