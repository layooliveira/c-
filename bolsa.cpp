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
	int ida;
	string esc;
	cout << " Informe a idade da crianca "  << endl;
	cin >> ida;
	cout << " Essa crianca esta frequentando a escola? (sim ou nao) " << endl;
	cin >> esc;
	if (ida <= 14 && ida >= 7 && esc == "sim"){
		cout << " Essa crianca recebera R$30.00" << endl;
	} else if (ida <= 14 && ida >= 7 && esc == "nao"){
		cout << " Essa crianca recebera R$10.00" << endl;
	} else if (ida > 14 || ida < 7 ) {
	cout << " Essa crianca nao tem direito a beneficios" << endl;
	}
	return 0;
}
