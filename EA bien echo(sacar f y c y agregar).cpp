// ************************************************************
// MATERIA   : INFORMATICA
// EXAMEN    : Examen de Especificación de Algoritmos, Nov. 2013
// NOMBRE    : GERMAN ANDRES LAMBERTI
// MATRICULA : 38279109
// CARRERA   : ING. COMPUTACION
// COMISION  : 1.5 C++ (Corral-Briones)
// ************************************************************
 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
using namespace std;

 const int N = 50 ;
 
 void leerMatriz(int [N][N], int& );
 void eliminarFilaColumna(int [N][N] , int[N][N], int, int);
 void obtenerFila(int[N][N], int, int[N]);
 void ampliarMatriz(int [N][N], int , int[N], int[N][N]);
 void mostrarMatriz(int [N][N], int);
 
 int dim;
 int vectorFila[N];
 int matrizX [N][N], vectorY[N], matrizAmpliada[N][N];
 int matrizA[N][N], matrizReducida[N][N], fila_i, columna_j ;  

int main() 
{
 
   leerMatriz(matrizA, dim);
   mostrarMatriz(matrizA, dim);
 
   // ingresar la fila y columna a eliminar
 
     do
     {
          cout << "\nIngrese numero de fila a borrar de su matriz " << dim << " x " << dim <<":";
          cin >> fila_i;
     } while (dim < fila_i || fila_i < 0);
 
     do
     {
          cout << "\nIngrese numero de columna a borrar de su matriz " << dim << " x " << dim <<":";
          cin >> columna_j;
     } while (dim < columna_j || columna_j < 0);
 
     for(int i = 0; i < dim; i++)
             for (int j = 0; j < dim; j++)
                      matrizReducida[i][j] = matrizA[i][j];
 
     eliminarFilaColumna(matrizA, matrizReducida, fila_i, columna_j);  
 
     mostrarMatriz(matrizReducida, dim-1);
 
   // ingresar la fila para construir el vector
 
      do
     {
          cout << "\nIngrese numero de fila con la cual va a generar el vector:";
          cin >> fila_i;
     } while (dim < fila_i || fila_i < 0);
 
      obtenerFila(matrizA, fila_i, vectorFila);
 
      for(int i = 0; i < dim; i++)
             for (int j = 0; j < dim; j++)
                      matrizAmpliada[i][j] = matrizA[i][j];
 
      ampliarMatriz(matrizA, dim, vectorFila, matrizAmpliada);
 
      mostrarMatriz(matrizAmpliada, dim+1);
   system ("PAUSE");
   return 0;
 
}

void leerMatriz(int matrizA[N][N], int& dim)
{
     do
     {
          cout << "Ingrese la dimension cuadrada de su matriz, mayor a 0 y menos a 50" << endl;
          cin >> dim;
     }while (0 > dim || dim > 50);
 
 
     for (int i = 0; i < dim; i++)
          for (int j = 0; j < dim; j++)
              {
                   cout << "\nIngrese numero para la filas:" << i << " y para la columna " << j << " : ";
                   cin >> matrizA[i][j];
              }     
}

void eliminarFilaColumna(int matrizA[N][N], int matrizReducida[N][N], int fila_i, int columna_j)
{
     cout << "Eliminando fila numero: " << fila_i << endl;
     for(int fila = 0; fila <= fila_i; fila++)
         {
          if (fila == fila_i)   
           {
                   for(int i = fila_i; i < dim; i++)
                      for (int j = 0; j < dim; j++)
                          matrizReducida[i][j] = matrizA[i+1][j];
           }               
 
         }      
        cout << "Eliminando columna numero: " << columna_j << endl;    
 
     for(int columna = 0; columna <= columna_j; columna++)
         {
           if (columna == columna_j)     
           {
             for(int i = 0; i < dim; i++)
              for (int j = columna_j; j < dim; j++)
               matrizReducida[i][j] = matrizReducida[i][j+1];
           }     
         }         
 
}
void obtenerFila(int matrizA[N][N], int fila_i, int vectorFila[N])
{
     cout << "El vector obtenido es: " ;
     for (int a = 0; a < dim+1; a++)
        {
            matrizA[fila_i][dim]  += matrizA[fila_i][a];
            vectorFila[a] = matrizA[fila_i][a];
            cout << vectorFila[a] << " ";
        }
        matrizA[fila_i][dim] = 0;
     cout << endl;       
}
void ampliarMatriz(int matrizX[N][N], int dim, int vectorY[N], int matrizAmpliada[N][N])
{
     int posicion;
 
      do
     {
          cout << "\nIngrese la fila y columna donde va a colocar el vector:";
          cin >> posicion;
     } while (dim < posicion || posicion < 0);
 
     cout << "Colocando en la fila numero: " << posicion << endl;
     for(int fila = 0; fila <= posicion; fila++)
         {
          if (fila == posicion)   
           {

                   for(int i = posicion; i < dim + 1; i++)
                      for (int j = 0; j < dim + 1; j++)
                          matrizAmpliada[i][j] = matrizX[i-1][j];
           }               
 
         }      
      cout << "Colocando en la columna numero: " << posicion << endl;    
 
     for(int columna = 0; columna <= posicion; columna++)
         {
           if (columna == posicion)     
           {
            for (int j = dim + 1; j >= posicion; j--)           
             for(int i = 0; i < dim + 1; i++)
               matrizAmpliada[i][j] = matrizAmpliada[i][j-1];
           }     
         }   
 

     for (int j = 0; j < dim + 1; j++)
         matrizAmpliada[posicion][j] = vectorY[j];
     for (int i = 0; i < dim + 1; i++)   
         matrizAmpliada[i][posicion] = vectorY[i];
 
}
void mostrarMatriz(int matrizA[N][N], int dim)
{
cout << "\nLa matriz queda formada por:" << endl;
       for (int i = 0; i < dim; i++)
          { 
            for (int j = 0; j < dim; j++)
              {
                   cout << matrizA[i][j] << " ";
              }    
              cout << endl;
           }
}
