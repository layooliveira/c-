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
	float valor , total, desconto;
	cout << "informe o valor da compra" << endl;
	cin >> valor;
	if (valor  >= 5000){
		desconto = 0.20;
	} else if (valor < 5000) {
		desconto = 0.15;
	}
	total = valor - (valor * desconto);
	cout << "O valor a ser pago é " << total;
		return 0;
}
