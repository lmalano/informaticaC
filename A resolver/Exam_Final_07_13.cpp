/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos -  Julio 2013
 NOMBRE    : 
 MATRICULA : 
 CARRERA   : 
 COMISION  : 
 **************************************************************

 Estimado alumno no modifique nada del código que le proveemos, 
 use los procedimientos o funciones que están definidos y no 
 agregue más a la solución.
 
 Realice un programa en C++ con las siguientes características:

 El programa debe leer una matriz de dimensión FIL  de números enteros que se 
 ingresará por teclado. La lectura debe realizarse desde el programa principal, 
 por columnas, llamando a la función  "leerMatriz" cuyo prototipo es:

    void leerMatriz(int mat[FIL][FIL], int cant);
   
 * La cantidad máxima de filas y columnas de la matriz es conocida y será
   parametrizada como la constante entera FIL dentro del código del programa.
   Sin embargo previo a la lectura de dicha matriz, se deberá ingresar por
   teclado un valor entero n (dentro de la función "main") que indicará la 
   cantidad de filas y columnas a procesar en cada una de las corridas que
   se realice del programa, por lo cual el programa (dentro de la función 
   "main") deberá validar este ingreso (el de la variable entera n),
   respecto de la máxima dimensión declarada en la constante entera FIL. 

 Imprimir la matriz leída mediante una función "impMat" cuyo prototipo será: 

   void impMat(int mat[FIL][FIL], int cant);

 Calcular el promedio de los números enteros ingresados a la matriz mat mediante
 Una función de prototipo:

   int promMat(int mat[FIL][FIL], int cant);
 
 Antes de devolver dicho promedio a la función "main" para su impresión, 
 con formato acorde, la función promMat deberá redondear dicho promedio al entero
 inmediato superior si la parte decimal supera 0.5 sino al inmediato anterior.

 Genere una nueva matriz nvmat cuyos elementos serán la diferencia entre los
 elementos de la matriz mat y el promedio calculado anteriormente. Esto con una 
 función cuyo prototipo será:

   void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom);   
 
 Imprimir la matriz generada mediante la función:
 
    void impMat(int mat[FIL][FIL], int cant);
 
 Determinar el mayor elemento en la matriz nvmat (es decir la mayor de las 
 diferencias) y su posición en dicha matriz (fila y columna), si no fuese único,
 se deberán tomar como valor máximo, el primer valor de encuentro del  mismo. 
  
 Esto se realizará con una función de prototipo:

 void detMay (int nvmat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol);

 Imprimir desde la función "main", el valor máximo y las posiciones de
 encuentro del mismo en la matriz(fila, columna), con formato y mensaje acorde.

 Generar un vector en el que cada elemento del mismo sea T(True) o F(False) 
 indicando si el mayor elemento determinado en el punto anterior se encuentra ó no 
 en cada fila de la matriz nvmat. Realizar este punto por una función de prototipo:

 void genVect(int nvmat[FIL][FIL], char vect[FIL],int cant, int may);   

 Imprimir el vector generado mediante la función:
 
    void impVect(char vect[FIL], int cant); 
 
 # Ejemplo de la salida por pantalla del programa:

   Ingrese la dimensión efectiva de la matriz: 4
   
   La Matriz ingresada fue: (por ejemplo)
 
   1  7  3  4
   4  2  5  6 
   7  8  9  4
   5  6  3  4

   (Nota: El promedio real dió: 4,875)

   El promedio es: 4

   La nueva matriz generada es:

   -3  3 -1 0
    0 -2  1 2
    3  4  5 0
    1  2 -1 0
      
   El valor máximo es: 5   
   
   La posición del máximo es (fila columna): 2 2  
     
   EL Vector Generado es: 

   F
   F
   T
   F   
 
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const int FIL = 10;


void leerMatriz(int mat[FIL][FIL], int cant);
void impMat(int mat[FIL][FIL], int cant);
int promMat(int mat[FIL][FIL], int cant);
void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom);  
void detMay (int nvmat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol);
void genVect(int nvmat[FIL][FIL], char vect[FIL],int cant, int may);
void inmpVect (char vect[FIL], int cant); 


int main () 
{
   int cant;
    int mat[FIL][FIL],nvmat[FIL][FIL];
    int may,posMayfil,posMayCol;
     char vect[FIL]; 
	  int prom;
      
    cout<<"ingrese la cant de columnas : ";
    cin>>cant;
    
	
	leerMatriz(mat,cant);
	impMat(mat,cant);
	cout<<"el promedio de la matriz ingresada es : "<<promMat(mat,cant)<<endl;
	prom=promMat(mat,cant);
CalcMatNva(mat,nvmat,cant,prom);

detMay (nvmat,cant, may,posMayfil,posMayCol);

cout<<"el valor de la mayor diferencia es : "<<may<<endl;
cout<<"de la posicion "<<posMayfil<<" "<<posMayCol<<endl;
   return 0;
}

void leerMatriz(int mat[FIL][FIL], int cant)
{
  cout << "Ingrese los elementos:"<<endl;
    for (int i=0; i < cant; i++) {
        for (int j=0; j < cant; j++) 
            cin >> mat[i][j]; }

}

void impMat(int mat[FIL][FIL], int cant)
{
   cout << "La matriz ingresada es:" << endl;
    for (int i=0; i < cant; i++) {
        cout << endl;
        for (int j=0; j < cant; j++) 
            cout << mat[i][j] << " "; 
    }
    cout << endl;

}



int promMat(int mat[FIL][FIL], int cant)
{
  int suma;
	int cantelem=cant*cant;
	int prom;
	for (int i=0; i < cant; i++) 
      for (int j=0; j < cant; j++)
        suma+=mat[i][j];	
        
        prom=suma/cantelem;
        
	return prom;
	

}


void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom)  
{
  cout << "La matriz de la diferencias es :" << endl;
    for (int i=0; i < cant; i++) {
        cout << endl;
        for (int j=0; j < cant; j++) 
        	nvmat[i][j]=mat[i][j]-prom;
            
    }
    impMat(nvmat,cant);
    cout << endl;
    
}

void detMay (int nvmat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol)
{
	
   for (int i=0; i < cant; i++) {
      { for (int j=0; j < cant; j++)
		  {
			   
	if(abs(nvmat[i][j])>may)
	
	may=abs(nvmat[i][j]);
	posMayfil=i;
	posMayCol=j; }
	} 
	
}

}
	


void genVect(int nvmat[FIL][FIL], char vect[FIL],int cant, int may)
{
   // for (int i=0; i < cant; i++) {
     //    for (int j=0; j < cant; j++) 
	//			{vect[i]+=nvmat[i][j]
				
}


//void inmpVect (char vect[FIL], int cant)
//{
//   // escriba el codigo de la funcion aqui
//
//}
//

