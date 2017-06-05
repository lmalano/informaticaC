#include<iostream>
using namespace std;

float pot(float, int); //declara las funciones que luego son especificadas
int  fact(int);
float seno(float);
 
int main()
{
float ang;
cout << "Introduzca el angulo (en radianes), para obtener su seno: ";
cin >> ang;
cout << seno(ang)<<endl;
 system("PAUSE");
return 0;
}

//llama a float pot(int, int) y la especifica

float pot(float base, int exp)//armado genericamente para que los valores se usen en float seno(float)
{
float rtdo = base;  
for(int i=1;i<exp;i++)
{rtdo=rtdo*base;}
return rtdo ;
}

//llama a int  fact(int) y la especifica

int fact(int numero)//armado genericamente para que los valores se usen en float seno(float)
{
    int rtdo = numero;  
for(int i=1;i<numero;i++)
{rtdo=rtdo*i;}
return rtdo ;
}

//llama a float seno(float) y la especifica!que a su vez esta funcion llama a la anteriores!
float seno(float radian)
{return radian-(pot(radian,3)/fact(3))+(pot(radian,5)/fact(5))-(pot(radian,7)/fact(7))+(pot(radian,9)/fact(9))-(pot(radian,11)/fact(11));
}
 

