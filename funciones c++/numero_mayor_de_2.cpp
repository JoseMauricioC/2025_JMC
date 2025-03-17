#include <iostream>
using namespace std;


 int mayor(int a, int b){
	 if(a > b){
		 return a;
	 }else{
		 return b;
	 }
 }
int main() {
	
	int x,y;
	cout<<"numero uno: ";
	cin>>x;
	cout<<"numero dos: ";
	cin>>y;
	
	cout<<"El mayor es: "<<mayor(x,y)<<endl;
	return 0;
}
