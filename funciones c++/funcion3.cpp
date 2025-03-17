#include <iostream>
using namespace std;

void numeroPar(int numero) { // Se cambia el tipo de retorno a void
	if (numero % 2 == 0) {
		cout << "Es par" << endl;
	} else {
		cout << "Es impar" << endl;
	}
}

int main() {
	int x; // Se declara x dentro de main para evitar globales innecesarios
	cout << "Introducir un número: ";
	cin >> x;
	
	numeroPar(x); // Llamada a la función
	return 0;
}


