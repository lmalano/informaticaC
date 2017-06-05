#include <iostream>
using namespace std;
 int main()
{ 
cout   << "la division de 15 sobre 7 es\n" << (15.0/7.0) <<endl;
//si no se pone el decimal ".0" al final del numero nos daria 2
// pero no nos daria el numero con mayor exactitud

//ahora veamos la division de 15/7 y queremos saber 
//su resto, operaremos de la siguente manera,
//utilizando el caracter "%" (no usar decimales ".0")

cout   << "el resto de la division de 15 sobre 7 es\n" << (15%7) <<endl;
      
      system("PAUSE");
        return 0;
}
