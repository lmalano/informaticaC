#include <iostream>
#include <cmath>//importante
using namespace std;

int main()
{
  float a,b,c,x;
  cout<<"bienvenido al programa para calcular un polinomio de segundo grado de la forma f(x)=ax^2+bx+c"<<endl;
  cout<<"para empezar definiermos los valores a utilizar!\n"<<endl;
  cout<<"Valor de a:"<<endl;
  cin>>a;
  cout<<"Valor de b:"<<endl;
  cin>>b;
  cout<<"Valor de c:"<<endl;
  cin>>c;
  cout<<"Valor de la variable x:"<<endl;
  cin>>x;
    
  cout<<"el valor del polinomio valuado en "<<x<<" vale "<<a*pow(x,2)+b*x+c<<endl;
  
  
  system("PAUSE");
  return 0;
}
