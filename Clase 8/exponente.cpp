#include<iostream>
using namespace std;
int  pot(int, int); // la declaracion de la funcion (prototipo)

int main()
{
int base,exp;
cout << "Introduzca la base: ";
cin >> base;
cout << "Introduzca el exponente: ";
cin >> exp;
cout << pot(base,exp)<<endl; // aquí se llama la funcion
 system("PAUSE");
return 0;
}

int pot(int base, int exp)//detalle de la funcion prototipo es los nombre x,y son genericos 
{
int rtdo = base;  
for(int i=1;i<exp;i++){ 
        rtdo=rtdo*base;
}


return rtdo ;

}
