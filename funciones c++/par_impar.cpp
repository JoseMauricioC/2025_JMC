#include <iostream>
using namespace std;

int par_impar(int x){
	if(x % 2 == 0){
		return true;
	}else{
		return false;
	}
}
int main() {
	int a;
	cout<<"introducir numero: ";
	cin>>a;
	
	cout<<par_impar(a);
	return 0;
}

