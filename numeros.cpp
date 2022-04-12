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
	int i;
	float num [10], soma, max, min; 
  
	for (i=0; i<=10 ; i++ ) { 		
		cout << " Informe o número "  <<  endl; 
		cin >> num[i];
		soma = soma + num[i]; 
	 }  	
	 
	for (i = 0; i <= 10; i++){ 		
	    if(i==0){ 
	       max = num[i]; 
	       min = num[i];
		} else if (num[i] > max){
		   max = num[i];
		} else if (num[i] < max){
		   min = num[i];	
		}       
     }  
	 cout << " O maior numero " << max <<   endl; 
	 cout << " O menor numero " << min <<   endl; 
	 cout << " A soma dos número "  << soma <<   endl;
	 return 0 ; 
}
