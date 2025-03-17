#include <iostream>
using namespace std;
int fact = 1;
void factorial(int y){
	for(int i = 1; i <= y; i++){
		fact *= i;
	}
	cout<<"el factorial es: "<<fact;
}
int main(int argc, char *argv[]) {
	int a;
	cout<<"introducir numero: ";
	cin>>a;
	factorial(a);
	return 0;
}

