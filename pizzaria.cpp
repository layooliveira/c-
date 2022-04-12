#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main(){ 
	setlocale(LC_ALL,"Portuguese");
	cout << fixed << setprecision(3);
	float qtdchop = 0, qtdpizza = 0, totpag = 0, totger = 0, txser = 0;
	int i = 0, borda; 
	
	
	while (i < 2 ) {
	    i++;	
		cout << " Informe a quandidade de choop  " <<  endl; 
		cin >>  qtdchop;
		cout << " Informe a quandidade de pizza  " <<  endl; 
		cin >>  qtdpizza;
		cout << " Informe 1 para borda - 2 sem borda  " <<  endl; 
		cin >>  borda;
		totpag = ( qtdchop * 4.8) + (qtdpizza * 30) ;
		if(borda == 1) {
			totpag = totpag + (qtdpizza* 1.50 ) ; 
		} 
        txser = (totpag*10) / 100;
		totpag = totpag + txser ; 
	    totger = totger + totpag ; 
		cout << " Valor a pagar " << totpag << endl;	 		
	}	
	 	cout << " Valor total arrecadado " << totger << endl;
	 
	  return 0 ; 
}
