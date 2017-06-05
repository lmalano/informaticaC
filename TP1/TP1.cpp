#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
    //Declaraciones de variables
    
    short int r1, r2, r3; // Variables de tipo enteros reducidas
    float ResistenciaCombinada; // Variable de tipo flotante

    //Instrucciones 
    
    r1 = 1000; //Asiganción de valor constante
    r2 = 1000; //Asiganción de valor constante
    r3 = 1000; //Asiganción de valor constante
        
    ResistenciaCombinada = 1.0 / ((1.0/r1) + (1.0/r2) + (1.0/r3)); //Calculo de resistencia total
    
    cout<<"La resistencia combinada es "<< setw(7) << fixed << setprecision(2) << ResistenciaCombinada <<" ohmios." << endl; //Presentacion en pantalla
    
    system("PAUSE");
    return 0;
}

    
