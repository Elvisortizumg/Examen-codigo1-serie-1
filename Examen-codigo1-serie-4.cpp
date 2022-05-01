#include <iostream>
using namespace:: std;

//19.- CONSTRUIR LA TABLA DE DIVIDIR QUE EL USUARIO INDIQUE.
int main(void) {
	
	float N;
	cout<<"ingrese un numero para dividir" <<endl;
	cin>> N;
	cout<<endl;
	
	for(int i=1;i<=20;i++){
		cout<<N<<" / "<<i<<" = " << N/i<<endl;
	}
	
	return 0;
}
