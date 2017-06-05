#include <iostream>
using namespace std;
const int dim=20;
void cargar_matriz (int [dim][dim], int, int);
void mostrar_matriz (int [dim][dim], int, int);
void sumar (int [dim][dim], int [dim][dim], int, int);
void multiplicar (int [dim][dim], int [dim][dim], int , int, int );
void ordenar (int [dim][dim], int, int);
void mostrar_lista (int [dim], int);


int main (){
    int filasA, columA, filasB, columB;
 
    cout << "Ingrese numero de filas y luego de columnas de la matriz 1:"<< endl;
    int A[dim][dim];
    cin >> filasA >> columA;
    cargar_matriz (A, filasA, columA);
 
    cout << endl;
 
    cout << "Ingrese numero de filas y luego de columas de la matriz 2:"<< endl;
    int B[dim][dim];
    cin >> filasB >> columB;
    cargar_matriz (B, filasB, columB);
 
    cout << endl;
 
    if ((filasA == filasB) && (columA == columB)){
    cout << "Se sumaran las matrices" << endl;
    sumar (A, B, filasA, columA);
    }
    else 
    cout << "Las matrices no se pueden sumar" << endl;
 
    cout << endl;
 
    if ((columA == filasB)){
    cout << "Se multiplicaran las matrices" << endl;
    multiplicar (A, B, filasA, columB, columB);
    }
    else
    cout << "Las matrices no se pueden multiplicar" << endl;
 
    cout << endl;
 
 
system ("pause");
return 0;
}

void cargar_matriz (int val[dim][dim], int filas, int colum){
 
     int a,b;
     cout << "Comienze a ingresar los elementos" << endl;
     for (a=0; a<filas; a++)
         for (b=0; b<colum; b++)
         cin >> val[a][b];

     mostrar_matriz(val, filas, colum);
}

void mostrar_matriz (int matriz[dim][dim], int filas, int colum){
 
     int a,b;
     cout << "La matriz es:" << endl;
     for (a=0; a<filas; a++){
         for (b=0; b<colum; b++){
         cout << matriz [a][b] << " ";
         }
     cout << endl;    
     }
}

void sumar (int A[dim][dim], int B[dim][dim], int filas, int colum){
 
     int a,b, suma[dim][dim];
     for (a=0; a<filas; a++){
         for (b=0; b<colum; b++){
         suma [a][b] = A[a][b] + B[a][b];
         }
     }
     mostrar_matriz (suma, filas, colum);

}

void multiplicar (int A[dim][dim], int B[dim][dim], int filas, int colum, int control){

     int a,b,c, C[dim][dim];
     for (a=0; a<filas; a++){
         for (b=0; b<colum; b++){
             C[a][b]=0;
             for (c=0; c<control; c++){
                 C[a][b] = C[a][b] + A[a][c] * B[c][b];
             }
         }
     }
     mostrar_matriz (C, filas, colum);
}

