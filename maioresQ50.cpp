#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main() { 
	setlocale(LC_ALL,"Portuguese");
	cout << fixed << setprecision(3);		 
	int i = 0, cont = 0;
	float num[7], soma; 
	for (i=0; i<=6 ; i++ ) { 		
		cout << " Informe o número   "  <<  endl; 
		cin >> num[i];
		if (num[i] > 50) { 
    	   soma = soma + num[i] ;  
		   cout << " Posição do número no vetor é " <<  i  << " numero " << num[i]  << endl;
		}  
	 } 
 	 cout << " Soma dos números maiores que 50 é  " <<  soma << endl; 
	 return 0 ; 
}
