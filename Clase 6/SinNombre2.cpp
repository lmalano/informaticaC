#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mes=0,dia=0;
    
    cout<<"Introdusca un mes (use 1 para Ene, etc): ";
    cin>> mes;
    
    cout<<"\nIntrodusca un dia del mes: ";
    cin>> dia;
    
    if((mes>12)||(mes<1))
    cout<<"\nEl mes introducido es invalido\n";
    
    else
    cout<<"\nEl mes ingresado es: "<<mes <<endl;  
       
    switch(mes)
    {

      case 1:
      case 3:
      case 5:        
      case 7:
      case 8:
      case 10:
      case 12:      
                      
     if((dia>31)||(dia<1))
    cout<<"\nEl dia ingresado es invalido\n";
    
    else
    cout<<"\nEl dia ingresado es: "<<dia <<"\n\n";
    break;
    
    
     case 4:
     case 6:        
     case 9:
     case 11:
              
     if((dia>30)||(dia<1))
    cout <<"\nEl dia ingresado es invalido\n";
    
    else
    cout<<"\nEl dia ingresado es: "<<dia <<"\n\n";  
    break;
       
          
     case 2:
             
     if((dia>28)||(dia<1))
    cout <<"\nEl dia ingresado es invalido\n"; 
    
    else
    cout<<"\nEl dia ingresado es: "<<dia <<"\n\n";
    break;
  }
           
   cout <<"\n\n";       
                           
   system("pause");
   
   return 0;
   
}
