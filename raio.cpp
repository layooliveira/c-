#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	float raio,area;
	cout << "informe o raio" << endl;
	cin >> raio;
	area = 3.14 * pow(raio,2);
	
	cout << "a area da circunferencia é: " << area << endl;
	return 0;
}
