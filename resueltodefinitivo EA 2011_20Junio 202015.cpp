/************************************************************
 MATERIA : INFORMATICA
 EXAMEN : Especificacion de Algoritmos - 10 de junio 2015
 NOMBRE : 
 MATRICULA : 
 CARRERA : 
 COMISION : 
 ************************************************************/
 
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>
#include <stdlib.h>// srand y rand!!!!!

using namespace std;
// definir constantes globales

const int tama=100;
const int maxvec=2;
// prototipado de funciones

void apostar(int[maxvec]);
int jugar();
void verifgana(int,int[maxvec], int [maxvec],int);
void mostrarganado(int, int[maxvec]);
void masveces( int, int [maxvec]  );

int main()
{
    // inicializo variables y arreglos
    int apuesta [maxvec], ganador [maxvec]={0};
    int gandor [maxvec];
    int veces=0,i=0,sor=88;
// semilla variables pseudo aleatorias     
    srand(time(NULL));
    cout <<"ingrese la cantidad de veces que va a jugar (maximo 100)"<<endl;
   
    cin>>veces;
    for (i=0;i<=veces; i++)
   gandor[i]=17;
    for (i=1;i<=veces; i++)
    {
        apostar(apuesta);
        sor=jugar();
        verifgana(sor,apuesta,ganador,i);
       
    }
        mostrarganado(veces, gandor); 
        masveces(veces,gandor);
        cout <<"    finalizo el programa   ";
    system("pause");
            return 0;
}

void apostar(int apu1[maxvec])
{
     int apuestanro=0, parimparcero=88, bien=0;
     while (bien==0)
     {
     cout<<"ingrese un valor entre 0 y 36 : ";
     cin>> apuestanro;
     cout<<endl<< "ingrese un cero (0)si es cero, si es par un uno si es impar y un 2 si es par su ingreso es: ";
     cin>> parimparcero;
      if ((apuestanro>=0 && apuestanro<=36)&&( parimparcero==0 || parimparcero==1 ||parimparcero==2))
      bien=99;
      }     
     apu1[1]=apuestanro;
     apu1[2]=parimparcero;
     
    return; }
    
int jugar()
{int a=0, b=36,sorteo=99 ;

     sorteo=a+ rand()%(b+1-a);
     cout<<"salió el número : "<<sorteo<<endl;
     return sorteo;
}
     
void verifgana(int sorti,int apu1[maxvec],int ganar[maxvec],int j)
{
     int result1=88;
     if (sorti==0){
                   cout<<"el numero sorteado es cero"<<endl;
                   result1=0;
                   } 
                  else{
                           
                            if (sorti%2==0)
                             {cout<<"El numero sorteado es par"<<endl;
                             result1=2;
                             }
                             else
                             {cout<<"el numero sorteado es impar"<<endl;
                             result1=1;
                             }
     // verificacion
     if(sorti==apu1[1]){
                        cout<<"UD ha ganado primera apuesta coincide numero ganador con su apuesta: "<< apu1[1]<<endl;
                        
                   //     ganar[j]=sorti;
                        
                        }else 
                        {
                              cout<<"su apuesta no coincide con el numero ganador  "<<endl;
                              }
     if (result1==apu1[2]){
                           cout<<"Ud ha ganado la segunda apuesta de esta jugada  "<< endl;
                           }
                           else
                           cout<<"Ud ha perdido su segunda apuesta de esta jugada  "<<endl;
                           }
     return;
}


void mostrarganado(int v, int gan[maxvec])
{// muestro el vector con los valores que salieron ganadores
int k;int m=77;
cout<<" los valores ganadores son : "<< endl;
for (k=1; k<=v; k++)
 {m=gan[k];
          cout<<m<<endl;
}
     return;
     }


     
void masveces(int vez,int gana[maxvec] )
{
int contador=0,i=0,masv=0,conti;
int mayor=-999, compa=99,j;
      for(i=1; i<=vez; i++)
       {
         compa= gana [i];
         for(j=1;j<=vez; j++)
            {
                         if(compa==gana[j])
                         contador=contador+1;
                         
              } 
        if (contador > mayor)
        masv=gana[i];
        conti=contador;
        }        

cout<<"el numero ganador que mas se repitio es: "<< masv<<endl;
cout <<" se repitio "<<conti<<" veces"<<endl;
return;}             
                         
                                                    
                           
                                           
     
