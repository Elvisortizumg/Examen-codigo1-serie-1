#include <iostream>
using namespace:: std;
//DESPLEGAR LA TABLA DE MULTIPLICAR QUE EL USUARIO INDIQUE.
int main(void) {
	
	int N;
	cout<<"ingrese un numero para multiplicar" <<endl;
	cin>> N;
	cout<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<N<<" X "<<i<<" = " << N*i<<endl;
	}
	
	return 0;
}
