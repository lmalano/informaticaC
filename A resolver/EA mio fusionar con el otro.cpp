 // ************************************************************
// MATERIA   : INFORMATICA
// EXAMEN    : Examen de Especificación de Algoritmos, Nov. 2011
// NOMBRE    : Leandro Malano
// MATRICULA : 38883701
// CARRERA   : Ingenieria en computacion
// COMISION  : 1.5 C++ (Corral-Briones)
// ************************************************************
/* Enunciado:

Con una matriz cuadrada leida desde el teclado se desea obtener una
matriz reducida eliminando una fila y columna que el usuario debe
indicar por teclado, dentro de la función "main". Mostra la matriz
reducida. 

Luego ampliar la matriz reducida empleando para ello un vector
construido con una fila de la matriz original (no de la reducida); la
fila debe ser indicada por el usuario. 


 1) El programa debe llamar desde el "main" a la funcion "leerMatriz" cuyo 
 prototipo es:

    void leerMatriz(int matrizA[N][N], int& dim);
 
 Dicha funcion debe leer por teclado la dimensión de una matriz
 cuadrada. La máxima dimensión de la matriz está determinada por una
 constante global N. Se debe validar que la dimensión no supere dicha
 constante N. Los valores de la matriz deben ser leídos por teclado.

2) El programa debe llamar desde "main" a la función
"eliminarFilaColumna" cuyo prototipo es:

       void eliminarFilaColumna(int matrizA[N][N], int matrizReducida[N-1][N-1], int fila_i, int columna_j)

Dicha función debe obtener una matriz reducida (matrizReducida) que
resulta de eliminar de matrizA la fila y columna indicada con fila_i y
columna_j, respectivamente.

3) El programa debe llamar desde "main" a la función "obtenerFila" cuyo prototipo es:

     obtenerFila(int matrizA[N][N], int fila_i, int vectorFila[N])

Dicha función debe contruir un vector, "vectorFila", con los elementos
de la una fila de la matriz. La fila en particular es indicada por el
argumento "fila_i"

4) El programa debe llamar desde "main" a la función "ampliarMatriz" cuyo prototipo es:

     ampliarMatriz(int matrizX[N-1][N-1], int dim, int vectorY[N], int matrizAmpliada[][])

Dicha función debe ampliar la matriz, "matrizX", agregando una fila y
columna. La fila y columna a agregar se deben construir con el vector,
"vectorY", y deben corresponder al mismo orden. Es decir, si se desea
agregar a "matrizX" una fila en la segunda posición, entonces se
deberá agregar también una columna en la segunda posición. El orden de
la fila/columna debe ser ingresado por teclado

Ejemplo:                  1 2 3
               matrizX =  4 5 6               vector = [10 11 12 13]
                          7 8 9

Fila/columna a agregar: 2da

                               1  10 2  3
              matrizAmpliada = 10 11 12 13
                               4  12 5  6  
                               7  13 8  9


4) E programa debe llamar desde "main" a la función "mostrarMatriz"
cuyo prototipo es:

        mostrarMatriz(int matrizX[N][N], int dim)
*/

// --- Inicio del programa -----------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>

using namespace std;

 int const N=5;
 int fc=0;
 int fila_a,columna_b;
 int vector[N] ;
 int fila_i =0;


void leermatriz(int [N][N],int , int );
void mostrarmatriz(int matrizA[N][N], int filas, int columnas);
void eliminarFilaColumna(int matrizA[N][N], int matrizReducida[N][N], int fila_i, int columna_j);
void obtenerFila(int matrizA[N][N], int fila_i, int vectorFila[N]);
void ampliarMatriz(int matrizX[N][N], int fc, int vectorY[N], int matrizAmpliada[N][N]);
void mostrarvector(int vector[N],int fc) ;

int main()  
{
int filas, columnas, fila_a,columna_b;
int matrizA[N][N];
int matrizReducida[N][N];
int matrizAmpliada[N][N];
int vampliado;

cout<<"inserte la cantidad de  filas/columnas de la matriz"<<endl;
cin>>fc;

leermatriz(matrizA,fc,fc );
mostrarmatriz(matrizA,fc,fc);

                           
cout<<" la fila a eliminar"<<endl;
cin>>fila_a;
cout<<"ingrese la columna a eliminar"<<endl;
cin>>columna_b;


if((fila_a <= fc) && (columna_b <= fc))
{ eliminarFilaColumna( matrizA,  matrizReducida,  fila_a,  columna_b);
                 mostrarmatriz( matrizReducida, fc-1,fc-1); }
else
{cout<<"mal"<<endl;}
 
cout<<"ingrese la fila  a seleccionar para obtener su vector:"<<endl;
cin>>fila_i;
cout<<"el vector de la fila "<<fila_i<< " es:"<<endl;
obtenerFila(matrizA , fila_i,vector);
  
ampliarMatriz( matrizA,  2,  vector,  matrizAmpliada);
// mostrarMatriz(...);
   system("pause");
   return 0;
   
}

void leermatriz (int matrizA[N][N], int filas, int columnas)
{
      int a,b;
      cout << "ingrese los elementos" << endl;
      for (a=0; a<filas; a++)
          for (b=0; b<columnas; b++)
         cin >> matrizA[a][b]; 
} 

void mostrarmatriz(int matrizA[N][N], int filas, int columnas)
{
    int a,b;
 string lineas (filas*3+1,'-');
 
     for (a=0; a<filas; a++)
          {cout <<lineas<<endl;
          cout<<"|";
               for (b=0; b<columnas; b++)
             { 
                   cout<<matrizA[a][b]<<"|";} 
              cout<<"  "<<endl;}            
              cout <<lineas<<endl;
}

void eliminarFilaColumna(int matrizA[N][N], int matrizReducida[N][N], int fila_a, int columna_b)
{
 int a,b;

       for ( a=0; a<N; a++)
           {
            for ( b=0; b<N; b++)
             {matrizReducida[a][b]= matrizA[a][b];
          }
       }
            
       for ( a= fila_a;a<fc    ;a++)
       {
              for (b=0; b<fc; b++)
              {
                  
               matrizReducida[a-1][b] = matrizReducida[a][b];
              }
       }

       for ( a= 0;a<fc    ;a++)
       {
              for (b=columna_b; b<fc; b++)
              {
                  
               matrizReducida[a][b-1] = matrizReducida[a][b];
              }
       }              
}
                           
void    obtenerFila( int matrizA [N][N], int fila_i,int vector [N])
{                  
 
   for ( int a= 0 ; a<fc;a++)
   {
    vector[a] = matrizA[fila_i-1][a];
    cout<<vector[a]<<endl;
}                
}

void ampliarMatriz(int matrizX[N][N], int fc, int vectorY[N], int matrizAmpliada[N][N])
{
     int posicion;
 
      do
     {
          cout << "\nIngrese la fila y columna donde va a colocar el vector:";
          cin >> posicion;
     } while (fc < posicion || posicion < 0);
 
     cout << "Colocando en la fila numero: " << posicion << endl;
     for(int fila = 0; fila <= posicion; fila++)
         {
          if (fila == posicion)   
           {

                   for(int i = posicion; i < fc + 1; i++)
                      for (int j = 0; j < fc + 1; j++)
                          matrizAmpliada[i][j] = matrizX[i-1][j];
           }               
 
         }      
      cout << "Colocando en la columna numero: " << posicion << endl;    
 
     for(int columna = 0; columna <= posicion; columna++)
         {
           if (columna == posicion)     
           {
            for (int j = fc + 1; j >= posicion; j--)           
             for(int i = 0; i < fc + 1; i++)
               matrizAmpliada[i][j] = matrizAmpliada[i][j-1];
           }     
         }   
 

     for (int j = 0; j < fc + 1; j++)
         matrizAmpliada[posicion][j] = vectorY[j];
     for (int i = 0; i < fc + 1; i++)   
         matrizAmpliada[i][posicion] = vectorY[i];
 
}  
