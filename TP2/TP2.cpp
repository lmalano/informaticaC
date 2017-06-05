#include <iostream>

using namespace std;
int main ()
{
    //Declaraciones de variables

    short int i, j ;          // Variables de enteros reducidas
    int x[5] = {1,2,3,4,5}; 
    int z[5] = {2,3,4,5,6}; 
    int y;       // Areglos

    //Instrucciones 
    
   for (i=1; i < 6; i++)
   {   
          for (j=1; j < 6; j++)        
          {
              
              if (x[i] == z[j])
                 {
                       cout << "Funcion Indefinida" << endl;
                 }
              else
                  {
                       y = (x[i] * z[j]) / (x[i] - z[j]);
                       cout << " El resultado de Y es: " << y << endl;              
                  } 
          }
   }
   
    
    system("PAUSE");
    return 0;
}

    
