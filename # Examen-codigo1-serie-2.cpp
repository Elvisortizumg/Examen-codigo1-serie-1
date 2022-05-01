#include <iostream>
using namespace:: std;
//Construir un programa que capture un deporte cualesquiera y despliegue dos implementos deportivos apropiados.
int main()
{
	int opc;// Variable para menu 
	char Balon,Guantes;
	char Bate, Manopla;
	do
	{
		cout<<"Escoja un deporte " <<endl;
		cout<<"******* 1.--futbool*******"<<endl;
		cout<<"******* 2.--beisbool*******"<<endl;
		cin>>opc;
		switch(opc)	
	{
		break;
		case 1:
			cout<<"futbool"<<endl;
			cout<<"los 2 elementos deportivos apropiados son:Guantes,Balon\n";
			
			break;
			
			case 2:
			cout<<"beisbool"<<endl;
			cout<<"los 2 elementos deportivos apropiados son:Bate, Manopla\n";
			break;
}
	} while(opc!= 0);
	cout<<"Termino el programa"<<endl;
	return 0;
}
