#include <iostream>
using namespace std;
int main()
{
const int evect = 5;
int i;                 //contador para tempmax
float v[evect];

for (i = 0; i < evect; i++)   //esto repite el ciclo hasta el valor de evect
{
cout << "Introduzca los elementos de vectores: ";
cin>>v[i];       // el ciclo de 5 veces hace que los valores se almacenen en v[i]
}


for(i=0;i<evect;i++)
  {
    cout<<v[i]<<endl;//para ver la columna (sinn endl para verla como fila)
  }



system("PAUSE");
return 0;
}
