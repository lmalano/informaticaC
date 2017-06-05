// PGM4-09
#include <iostream>
#include <cmath>
using namespace std;

// este programa encuentra las raices de una ecuacion cuadratica
// 
int main()
{
  double a, b, c, disc, raiz1, raiz2;

  cout << "Este programa calcula las raices de una\n";
  cout << "   ecuacion cuadratica de la forma\n";
  cout << "            2\n";
  cout << "          ax + bx + c = 0\n\n";
  cout << "Ingrese valores para a, b, y c: ";
  cin >>  a >>  b >> c;
  if ( a == 0.0 && b == 0.0)
    cout << "La ecuacion es degenerada y no tiene raices .\n";
  else if (a == 0.0)
    cout << "La ecuacion tienen una unica raiz x = "
	 << -c/b << endl;
  else
  {
    disc = pow(b,2.0) - 4 * a * c;    // calcula el discriminante
    if (disc > 0.0)
    {
      disc = sqrt(disc);
      raiz1 = (-b + disc) / (2 * a);
      raiz2 = (-b - disc) / (2 * a);
      cout << "Las dos raices reales son "
	   << raiz1 << " y " << raiz2 << endl;
    }
    else if (disc < 0.0)
      cout << "Ambas raices son imaginarias.\n";
    else
      cout << "Ambas raices son igales a " << -b / (2 * a) << endl;
  }

  system("PAUSE");
  return 0;
}
