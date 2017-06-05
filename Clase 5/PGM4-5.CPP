// PGM4-05
#include <iostream>
using namespace std;

int main()
{
  char codigo;

  cout << "Ingrese un codigo de especificacion: ";
  cin  >> codigo;

  if (codigo == 'S')
     cout << "El componente tiene calificacion de exploracion espacial.";
  else if (codigo == 'M')
    cout << "El componente tiene calificacion militar.";
  else if (codigo == 'C')
    cout << "El componente tiene calificacion comercial.";
  else if (codigo == 'J')
     cout << "El componente tiene calificacion de juguete.";
  else
     cout << "Se ha ingresado un codigo invalido.";
  cout << endl;

  system("PAUSE");
  return 0;
}
