// PGM3-07
// un programa que ilustra la conversion de resultados
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << "El valor decimal (base 10) de 15 es " << 15 << endl;
  cout << "El valor octal (base 8) de 15 es " 
       << showbase << oct << 15 <<endl;
  cout << "El valor hexadecimal (base 16) de 15 es " 
	   << showbase << hex << 15 << endl;

  system("PAUSE");
  return 0;
}

