#include <cstdlib>
#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main()
{
	
	complex<int> c1,c2;//defino los numeros complejos
   c1=complex<double>(3,4);//numero complejo 1
  c2=complex<double>cin>>(3,4);//numero complejo 2
  
  cout<<c1<<endl;//muestro c1
	cout<<c2<<endl;//muestro c2
	
	cout<<"multiplico"<<c1*c2<<endl;
	cout<<"sumo"<<c1+c2<<endl;
	cout<<"resto"<<c1-c2<<endl;
	cout<<"divido"<<c1/c2<<endl;
	    system("PAUSE");
    return EXIT_SUCCESS;
    
}
