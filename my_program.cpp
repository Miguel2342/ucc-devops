#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace  std;

int main () {
	int ivalor = 0;
	int icontador = 0;
	int i = 0;	

	count << "ingresar un valor para calcular una suma.\n";
	cin >> ivalor;
	cout << "Usted Ingreso:" << ivalor << endl;

	for (i = 1; i <= ivalor; i++) {
		icontador+=i;
	}

	cout << "El resultado es:" << icontador << endl;

	return 0;
}
