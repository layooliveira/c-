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
	
	int i=0;
	float temp [7], soma, md, cont;
	//float soma , md;
	
	for (i=i; i<=6; i++){
		cout << "Informe o valor " << endl;
		cin >> temp[i];	
		soma = soma + temp[i];
	}
	md = soma / 7;
	for (i=0; i<=6; i++){
			if(temp[i] > md){
				cont++;
			}
	
	}
		cout << " quantidade de dias com temperatura superior a media eh " << cont;
	return 0;
	}
	
