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
	int placa;
	cout << "informe o ultimo numero de sua placa" << endl;
	cin >> placa;
	
 	if (placa == 0) {
		cout << "OUTUBRO" ;
	} else if (placa == 1) {
		cout << "JANEIRO"  ;
	} else if (placa == 2) {
		cout << "FEVEREIRO" ;
	} else if (placa == 3) {
		cout << "MARCO" ;
	} else if (placa == 4) {
		cout << "ABRIL" ;
	} else if (placa == 5) {
		cout << "MAIO" ;
	} else if (placa == 6) {
		cout << "JUNHO" ;
	} else if (placa == 7) {
		cout << "JULHO" ;
	} else if (placa == 8) {
		cout << "AGOSTO" ;
	}
			return 0;
}
