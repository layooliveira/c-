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
		cout << " Informe o n�mero   "  <<  endl; 
		cin >> num[i];
		if (num[i] > 50) { 
    	   soma = soma + num[i] ;  
		   cout << " Posi��o do n�mero no vetor � " <<  i  << " numero " << num[i]  << endl;
		}  
	 } 
 	 cout << " Soma dos n�meros maiores que 50 �  " <<  soma << endl; 
	 return 0 ; 
}
