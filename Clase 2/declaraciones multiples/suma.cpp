#include <iostream>
using namespace std;
 int main()
{   //empezando con el ejemplo de declaraciones de variables 
//con promedio, en vez de asignar dif valores lo hacemo en una sola linea 
//int num1=1;
//int num2=22;
//int total=num1+num2; AHORA LO HACEMOS ASI
double num1,num2,total,promedio;
    num1=6.0;
    num2=7.0;
    total=num1+num2;
    promedio=total/2.0;
//esto nos permite ahorra lineas para la  
//asignacion del tipo de numero a almacenar
//lo mismo podemos hacer con char!      
cout  << "el promedio de 6 y 7 da= " <<(total/2.0)<<endl;
      system("PAUSE");
        return 0;
}
