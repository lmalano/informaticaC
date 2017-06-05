// PGM3-07
// un programa que ilustra la conversion de resultados
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << "El valor decimal (base 10) de 20 es " << 20 << endl;
  cout << "El valor octal (base 8) de 20 es " 
       << showbase << oct << 20 <<endl;
  cout << "El valor hexadecimal (base 16) de 20 es " 
	   << showbase << hex << 20 << endl;

  system("PAUSE");
  return 0;
}

