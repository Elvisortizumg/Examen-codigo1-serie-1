#include <iostream>
#include <cstdlib>
using namespace std;
int numero; 
int main(){
div_t resultado;
cout << "Ingrese un numero para saber si es par" << endl;
cin >> numero; 
resultado=div(numero,2);
if (resultado.rem>0)
{
cout << numero << " El numero es impar" << endl;
}
else {
    cout << numero << " El numero  es par" << endl;
}
cin.get();
cin.ignore();
return 0;
}
