// PGM3-17
// aproxima la función e elevada a la potencia x 
// utilizando uno, dos, tres y cuatro terminos de
// un polinomio de aproximacion.
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double x, funcVal, aprox, diferencia;

  cout << "\nIngesar un valor de x: ";
  cin  >> x;

    // imprime las dos lineas del titulo
  cout << "  e a la x         Aproximacion      diferencia\n";
  cout << "-------------     -------------     -------------\n";

  funcVal = exp(x);      // utilice la funcion de biblioteca

    // calcula la primera aproximacion
  aprox = 1;
  diferencia = abs(funcVal - aprox);
  cout << setw(10) << setiosflags(ios::showpoint) << funcVal
       << setw(18) << aprox
       << setw(18) << diferencia << endl;

    // calcula la segunda aproximacion
  aprox = aprox + x;
  diferencia = abs(funcVal - aprox);
  cout << setw(10) << setiosflags(ios::showpoint) << funcVal
       << setw(18) << aprox
       << setw(18) << diferencia << endl;

    // calcula la tercera aproximacion
  aprox = aprox + pow(x,2)/2.0;
  diferencia = abs(funcVal - aprox);
  cout << setw(10) << setiosflags(ios::showpoint) << funcVal
       << setw(18) << aprox
       << setw(18) << diferencia << endl;

    // calcula la cuarta aproximacion
  aprox = aprox + pow(x,3)/6.0;
  diferencia = abs(funcVal - aprox);
  cout << setw(10) << setiosflags(ios::showpoint) << funcVal
       << setw(18) << aprox
       << setw(18) << diferencia << endl;

  system("PAUSE");
  return 0;
}
