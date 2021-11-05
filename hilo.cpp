#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace  std;

int main () {
	int ivalor = 4;
	int icontador = 0;
	int i = 0;	
	double dsleep = 0;

	cout << "+-------------PROGRAMA HILO -----------------+" << endl;

	for (i = 1; i <= ivalor; i++) {
		icontador+=i;
		dsleep=1-(1/i);
		cout << "Ciclo for i = " << i << "Contador = " << icontador << "sleep = " << dsleep << endl;
		usleep(dsleep);
	}

 	cout << "+===========> Llamado a otro Programa  -------------------+" << endl;
	system("./bin/areasj");
	cout << "+------------------- Fin Programa -------------------+" << endl;

	return 0;
}
