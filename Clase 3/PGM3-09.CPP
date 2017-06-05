// PGM3-09
#include <iostream>   // esta línea puede colocarse en segundo lugar
#include <cmath>      // esta línea puede colocarse en primer lugar
using namespace std;

int main()
{
  int altura;
  double tiempo;

  altura = 800; // altura en metros
  tiempo = sqrt(2 * altura / 9.80665); //g = 9.80665 m/seg2
  cout << "Tardara " << tiempo << " segundos para caer "
       << altura << " metros.\n";

  system("PAUSE");
  return 0;
}
