#include <iostream>
using namespace std;

void asteriscos(int fila, int col){
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < col; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main() {
	int f,c;
	cout<<"introducir fila: ";
	cin >> f;
	
	cout<<"introducir columna: ";
	cin >> c;
	
	asteriscos(f,c);
	return 0;
}

