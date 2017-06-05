// PGM3-13
#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  double promedio;

  cout << "Ingrese tres numeros enteros: ";
  cin  >> num1 >> num2 >> num3;
  promedio =  (num1 + num2 + num3) / 3.0;
  cout << "El promedio de los tres numero es " << promedio << endl;

  system("PAUSE");
  return 0;
}
