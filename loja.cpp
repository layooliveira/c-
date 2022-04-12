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
	float qtd, vlf, qtf, vlg, qtg, vlb, qtb, vlt;
	int i, cod;
	while (i < 11) {
		cout << "Digite o codigo do produto " << endl;
		cin >> cod;
		vlt = 0;
		if (cod = 1){
		vlt = vlt + 100;
		vlf = vlf + 100;
		qtf++;			
		} else if (cod = 2){
			vlt = vlt + 300;
			vlg = vlg + 300;
			qtg++;
			} else if (cod = 3){
				vlt = vlt + 80;
				vlb = vlb + 80;
				qtb++;
			}
			
	vlt = vlb + vlf + vlg;
	i++;
	}

	cout << "Foram vendidos " << qtf << " fogões, " << qtg << " geladeiras e " << qtb << " balcões. A loja teve um total de " << vlt << "reais em vendas.";
}
