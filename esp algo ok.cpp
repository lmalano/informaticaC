/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos -  Febrero 2015
 NOMBRE    :  
 MATRICULA :  
 CARRERA   :  
 COMISION  :  
 **************************************************************
 
 
 
 Estimado alumno no modifique nada del código que le proveemos,  
 use los procedimientos o funciones que están definidos y no  
 agregue más a la solución.
 Realice un programa en C++ con las siguientes características:
 
 El programa debe procesar una matriz de dimensión FIL  de números enteros que se  
 ingresará por teclado. Desde el programa principal se debera llamar a la funcion "leerMatriz" la cual realizara  
 el ingreso de datos por columna. El prototipo  de la funcion "leerMatriz" es:
    void leerMatriz(int mat[FIL][FIL], int cant);
    
 * La cantidad máxima de filas y columnas de la matriz es conocida como la constante  
   entera FIL dentro del código del programa.
             const int FIL=10; 
    
   Previo a la lectura de la matriz, se deberá ingresar por
   teclado un valor entero "cant" (dentro de la función "main") que indicará la  
   cantidad de filas y columnas a procesar en cada una de las corridas que
   realice el programa. El programa (dentro de la función  
   "main") deberá validar el ingreso de la variable entera "cant" verificando que sea mayor a cero y menor o igual
   a la máxima dimensión declarada en la constante entera FIL. Caso contrario debera solicitar el reingreso del  
   valor "cant".
 
 * Imprimir la matriz ingresada mediante una función "impMat" cuyo prototipo será:  
          
         void impMat(int mat[FIL][FIL], int cant);
 
 * Determinar el menor y el mayor elemento de dicha matriz. De encontrarse repetidos
   se deberán tomar como valores mínimo y máximo  los últimos  valores encontrados.
   Esto se realizará mediante una función "detMinMax" cuyo protoripo será:
    
         void detMinMax (int mat[FIL][FIL], int cant, int & min, int & max);
 
 * Imprimir desde la función "main", el valor mínimo, el máximo y la diferencia entre
   ellos, "dif".
 
 * Determinar en la matriz la cantidad de encuentros (valores iguales a la diferencia entre
   valor máximo y el mínimo) obtenidos con anterioridad.  
   Realizar esto mediante una función "detCantEnct" cuyo protoripo será:
    
         int detCantEnct (int mat[FIL][FIL], int cant, int dif);
 
 * Imprimir desde la función "main", la cantidad de dichos encuentros.
 
 
 * Intercambiar la última fila con la última columna de la Matriz ingresada.
   A travez de la función "interCambio" cuyo prototipo será:
 
         void interCambio (int mat[FIL][FIL], int cant);  
 
 * Imprimir la matriz cambiada mediante la función "impMat".
 
 # Ejemplo de la salida por pantalla del programa:
   Ingrese la dimensión efectiva de la matriz: 11
   Error: el valor debe ser menor o igual a 10
   Ingrese la dimensión efectiva de la matriz: 4
    
   Ingrese elemento[0][0] = 1
   ...
   Ingrese elemento[3][3] = 4
    
   La Matriz ingresada fue:
   1  7  3  4
   4  2  5  9  
   7  8  9  4
   5  6  3  4
    
   El valor mínimo es: 1    
   El valor máximo es: 9    
   La diferencia es: 8   
    
   La cantidad de encuentros es: 1    
    
   La Matriz con los intercambios es:  
   1  7  3  5
   4  2  5  6  
   7  8  9  3
   4  9  4  4
*/


#include<iostream>
#include<iomanip>
#include <stdio.h>


using namespace std;
 
const int FIL = 10;
 
void leerMatriz(int mat[FIL][FIL], int cant);
void impMat(int mat[FIL][FIL], int cant);
void detMinMax (int mat[FIL][FIL], int cant, int& min, int& max);
int detCantEnct (int mat[FIL][FIL], int cant, int dif);
void interCambio (int mat[FIL][FIL], int cant);


int main ()  
{
	int matriz[FIL][FIL];
  int cant,dif;
  int min=99999;
  int max=0;
  cout<<"ingrese dim de la matriz"<<endl;
  cin>>cant;
  leerMatriz(matriz,cant);
  impMat(matriz,cant);
   detMinMax(matriz, cant, min, max);
  printf("el valor de maximo es : %d\n",max);
  printf("el valor de minimo es : %d\n",min);
  dif=max-min;
  printf("el valor de su diferencia es : %d\n",dif);
  

  
  cout<<"La cantidad de encuentros es : "<<detCantEnct (matriz, cant,dif)<<endl;
  
  interCambio (matriz,cant);
  //system("pause");
   //return 0;
}
 
void leerMatriz(int mat[FIL][FIL], int cant)
{
   for (int i=0; i < cant; i++) {
        cout << "Ingrese los valores de la fila " << i << " : ";
        for (int j=0; j <cant; j++) 
            cin >> mat[i][j]; 
    }
}
 
void impMat(int mat[FIL][FIL], int cant)
{
    cout << "La matriz es:" << endl;
    for (int i=0; i < cant; i++) {
        cout << endl;
        for (int j=0; j < cant; j++) 
            cout << mat[i][j] << " "; 
    }
    cout << endl;
}
 
void detMinMax(int mat[FIL][FIL], int cant, int& min, int& max)
{
	
  for (int i=0; i < cant; i++) {
         for (int j=0; j <cant; j++) 
            if(mat[i][j]>max)
				max=mat[i][j];
    }
    
    for (int i=0; i < cant; i++) {
         for (int j=0; j <cant; j++) 
            if(mat[i][j]<min)
				min=mat[i][j];
    }
    
}
 
 

 
 
int detCantEnct (int mat[FIL][FIL], int cant, int dif)
{
  int enc;
   for (int i=0; i < cant; i++) {
        for (int j=0; j <cant; j++) 
          if(mat[i][j]==dif)
           enc++;
    }
  
  return enc;
}   			

void interCambio (int mat[FIL][FIL], int cant)  
{
	int aux;
	
	for (int i=0; i < cant; i++) 
			{	
			aux=mat[cant-1][i];
   				mat[cant-1][i]= mat[i][cant-1];
   				mat[i][cant-1]=aux;
				   }
		cout<<"matriz intercambiada : "<<endl;		   
		impMat(mat,cant);	   
	 	cout<<endl;		
}
			   
	
    	   	  	   		



