#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  float PI,altura,radio;
         PI=3.1416;
  
  cout<<"ingrese el valor de la altura:"<<endl;
  cin>> altura;
  cout<<"ingrese el valor del radio:"<<endl;
  cin>> radio; 
  cout<<"el valor del volumen es:"<<PI*pow(radio,2)*altura<<endl;
  
  
  system("PAUSE");
  return 0;
}
