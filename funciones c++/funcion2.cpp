#include <iostream>
using namespace std;
int x, y;                                                                           

// Definici�n de una funci�n que suma dos n�meros
int suma(int a, int b) {
	return a + b;
}

int main() {
	cout << "meter numero 1: ";
	cin >> x;
	cout << "meter numero 2: ";
	cin >> y;
	
	int resultado = suma(x, y);
	cout << "La suma es: " << resultado << endl;
	return 0;
}

