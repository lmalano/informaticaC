#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float altura,radio,volumen;
  
  cout<<"dame el valor de la altura:"<<endl;  
  cin>>altura;  
  cout<<"dame el valor del radio:"<<endl;  
  cin>> radio;
  volumen=3.1415*pow(radio,2)*altura;
  cout<<"el volumen es: "<<volumen<<endl;
  
  
  
  system("PAUSE");
  return 0;
}
