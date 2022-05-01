#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
float  numero;

do{
cout<<"Ingrese un numero: "; 
cin>>numero;
}
while((numero<=1)||(numero>=100));
for(int i=1; i<=100; i++){
cout<<numero<<" / "<<i<<" = "<<numero/i<<endl;
}
cout<<"\n\n";
system("pause");
return 0;
}
