#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>

#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");

	
	float celsius , fah;
	
	cout << "Digite a temperatura em Fahrenheit" << endl;
	cin >> fah;
	
	celsius = (fah-32)*(5/9); 
	
	cout << "a temperatura em celsius é igual a " << celsius ;
	return 0;
}
