#include <iostream>
using namespace std;
int r;
void tablamultiplicar(int numero){
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			r = numero*i;
			cout<<numero<<" x "<<i<<" = "<<r<<endl;
		}
		cout<<endl;
	}
}
int main() {
	int num;
	cout<<"meter numero ";
	cin>>num;
	
	tablamultiplicar(num);
	return 0;
}

