#include <iostream>
using namespace std;
int main()
{
int cant;
cout<<"inserte la cantidad de numeros a ingresar"<<endl;
cin>> cant;
int i;//para empezar el ciclo for
int max;// va a ser el  maximo numero( q se va valuando)
int nums[i];
cout<<"inserte 22los "<<cant<<" numeros a mostrar, para sacar el maximo"<<endl;

for(i=0;i<cant;i++)
{
  cin>>nums[i];
}
max=nums[0];// empieza con el primer numero a valuar (almacena 2)

for (i = 1; i < cant; i++) //para el ciclo
{
if(max<nums[i]) //si se cumple q 2(max actual) es menor q algun numero de cant
max=nums[i]; //aca toma el valor
}
cout << "El valor maximo es "<<max<< endl;// y lo muestra

system("PAUSE");
return 0;

}
