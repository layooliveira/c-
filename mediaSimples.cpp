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
	
	float mini, maxi, media;
	
	cout << "insira a quantidade minima" << endl;
	cin >> mini;
	cout << "insira a quantidade maxima" << endl;
	cin >> maxi;
	media = (mini + maxi) /2;
	
	cout << "a media é " << media << endl;
	
	return 0;
}
