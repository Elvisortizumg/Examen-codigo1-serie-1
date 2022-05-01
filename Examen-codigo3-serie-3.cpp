#include <iostream>
#include <cmath>
//14.- DESPLEGAR LOS MÚLTIPLOS DE 5, ENTRE 10 Y 50, ACOMPAÑADOS DE SU FACTORIAL Y LOGARITMO RESPECTIVO.
using namespace std;
int main()
{
double n = 0, Fact = 1, Lo, f = 0;
while (n <= 50 )
{
n = (n + 1);
Fact = Fact * n;
Lo = log10(n);
if (n == 10)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 15)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 20)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 25)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 30)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 35)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 40)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 45)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
else if (n == 50)
{
cout << " factorial de " << n << " es " << Fact << endl;
cout << " logaritmo es " << Lo << endl;
}
}
system("pause");
}
