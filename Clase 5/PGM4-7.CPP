// PGM4-07
#include <iostream>
using namespace std;

int main()
{
  int opselect;
  double pnum, snum;

  cout << "Ingese dos numeros: ";
  cin  >> pnum >> snum;
  cout << "Ingrese un codigo de seleccion: ";
  cout << "\n        1 para sumar";
  cout << "\n        2 para multiplicar";
  cout << "\n        3 para dividir : ";
  cin  >> opselect;

  switch (opselect)
  {
    case 1:
      cout << "\nLa suma de los numeros ingresados es " << pnum+snum;
      break;
    case 2:
      cout << "\nEl producto de los numeros ingresados es " << pnum*snum;
      break;
    case 3:
      cout << "\nEl primer numero dividido por el segundo es " << pnum/snum;
      break;
  }     // fin de switch

  cout << endl;

  system("PAUSE");
  return 0;
}
