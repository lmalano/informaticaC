/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos -  Julio 2013
 NOMBRE    : Jaime Julieta Aldana 
 MATRICULA : 36.132.436
 CARRERA   : Ing. Biomedica
 COMISION  : RED 1.2
 **************************************************************
*/
#include<iostream>
#include<iomanip>
using namespace std;

const int FIL = 10;

void leerMatriz(int mat[FIL][FIL], int cant);
void impMat(int mat[FIL][FIL], int cant);
int promMat(int mat[FIL][FIL], int cant);
void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom);  
void detMay (int mat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol);
/*void genVect(int nvmat[FIL][FIL], char vect[FIL],int cant, int may);
void inmpVect (char vect[FIL], int cant); */

// Programa Principal
int main () 
{
  int  mat[FIL][FIL], n, promedio, nvmat[FIL][FIL];
  
  
  cout << "\nIngrese la dimension efectiva de la matriz: "<<endl;
  cin >> n;
  
  if (n % 1 == 0)
   cout << "\nDato entero " << endl;  
  else
   cout << "\nDato en decimales " << endl;
  /* cout << "\nReingrese el ultimo dato " << endl;
   for (int i=0; i<n; i++)
   { 
       for (int j=0; j<n; j++)
       {
           
           cin >> mat [j][i];
       }
       
   }
}
*/       
 leerMatriz (mat , n);  

cout << "\nLa matriz ingresada fue: " << endl;
impMat (mat, n);
cout << endl;

promedio = promMat( mat, n);

cout << "\nEl promedio de todos los numeros de la matriz es : " << promedio << endl;

CalcMatNva( mat, nvmat, n, promedio);  
impMat(nvmat, n);
cout << endl;


   system ("pause");
   return 0;
}

/*
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
   */
   
   
void leerMatriz(int mat[FIL][FIL], int cant)
{
   for(int i=0; i<cant ; i++)
   { 
           cout << "\nColumna: " << i << endl;
     for (int j=0; j<cant; j++)
     {
       cout << "Fila: " << j << endl;  
       cin >> mat [j][i];    
        
     }        
           
          
   }
return ;   

}

/* Imprimir la matriz leída mediante una función "impMat" cuyo prototipo será: 

   void impMat(int mat[FIL][FIL], int cant); */

 void impMat(int mat[FIL][FIL], int cant)
{
  
   for(int i=0; i<cant ; i++)
   { 
       cout << endl;  //  cout << "\nColumna: " << i << endl;
     for (int j=0; j<cant; j++)
     {
       //cout << "Fila: " << j << endl;  
       cout << setw (4 )<< mat [j][i];    
        
     }        
   }
return;
}

/*Calcular el promedio de los números enteros ingresados a la matriz mat mediante
 Una función de prototipo:

   int promMat(int mat[FIL][FIL], int cant);
 
 Antes de devolver dicho promedio a la función "main" para su impresión, 
 con formato acorde, la función promMat deberá redondear dicho promedio al entero
 inmediato superior si la parte decimal supera 0.5 sino al inmediato anterior.*/


int promMat(int mat[FIL][FIL], int cant)
{
  int S [cant], suma=0, promedio, suma_fila[cant], promedio_fila [cant];
  
   for(int i=0; i<cant ; i++)
   { 
     S[i] = 0;
      
     for (int j=0; j<cant; j++)
     {
        S [i]=  S[i] + mat [j][i];    
        
     }  
  //  cout << "\nSuma en fila " << i << " es " << S [i]<< endl; 
    
   }
   
   for(int i=0; i<cant ; i++)
   {
    suma = suma + S[i];      
    }
    
   
   promedio= (suma/cant)/cant;
   
return promedio;    

}

/*Genere una nueva matriz nvmat cuyos elementos serán la diferencia entre los
 elementos de la matriz mat y el promedio calculado anteriormente. Esto con una 
 función cuyo prototipo será:

   void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom);   
*/



void CalcMatNva(int mat[FIL][FIL], int nvmat[FIL][FIL],int cant, int prom)  
{
  for(int i=0; i<cant ; i++)
   { 
     for (int j=0; j<cant; j++)
     {
       nvmat [j][i] = mat [j][i] - prom;
       //cout << setw (2) << nvmat [j][i] ;
             
     }    
   }
 return;
} 

/*
Determinar el mayor elemento en la matriz nvmat (es decir la mayor de las 
 diferencias) y su posición en dicha matriz (fila y columna), si no fuese único,
 se deberán tomar como valor máximo, el primer valor de encuentro del  mismo. 
  
 Esto se realizará con una función de prototipo:

 void detMay (int mat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol);

*/  
  
  
void detMay (int mat[FIL][FIL], int cant, int &may,int &posMayfil,int &posMayCol)
{
   
   
   
   
   
   

}
/*
void genVect(int nvmat[FIL][FIL], char vect[FIL],int cant, int may)
{
   // escriba el codigo de la funcion aqui

}

void inmpVect (char vect[FIL], int cant); 
{
   // escriba el codigo de la funcion aqui

}

/* TABLA DE CALIFICACION:
  /10 Principal  
  /10 validacion
  /10 leerMatriz
  /10 impMat
  /10 promMat
  /15 CalcMatNva
  /15 detMay
  /10 genVect
  /05 impVect
  /05 Comentarios, semántica y presentación
-----------------------
  Tot /100
/*
*/
