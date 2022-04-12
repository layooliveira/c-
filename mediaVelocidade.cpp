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
	int vel, per;
	cout << " Informe a velocidade " << endl;
	cin >> vel;
	if (vel <= (50+50*0.2)) {
		cout << " Velocidade permitida " << endl;
	} else {
		cout << " velocidade acima da maxima permitida " << endl;
	}
	return 0;
}
