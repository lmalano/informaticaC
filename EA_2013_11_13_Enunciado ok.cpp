/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos - 13 Noviembre 2013
 NOMBRES   : 
 MATRICULA : 
 CARRERA   : 
 COMISION  : 
 **************************************************************
 TABLA DE CALIFICACION:
 --------------------------------------------------------------
  /15  cargar_vectores
  /10  imprimir_vectores
  /10  calcular_promedio
  /10  calcular_rango
  /20  elementos_en_comun
  /15  calcular_matriz
  /10  imprimir_matriz
  /10  Comentarios, semántica y presentación
 --------------------------------------------------------------
  /100 Total 
 **************************************************************

 Realice un programa en C++ con las siguientes características:

 El programa debe pedirle al usuario que ingrese dos vectores de
 números enteros como se muestra en los ejemplos de la ejecución del
 programa que se encuentra al final de este enunciado. Para cada uno
 de los vectores ingresados, el programa debe primero pedir que se
 ingrese la cantidad de elementos del vector y luego pedir que se
 ingresen los números del vector separados por uno o mas espacios. La
 máxima longitud que puede tener el vector es de 10 elementos. El
 programa debe verificar que el usuario no ingrese una longitud
 inválida.

 Los vectores se deben cargar dentro de la función "cargar_vectores"

 Luego, el programa debe imprimir por pantalla los vectores
 ingresados. Dicha tarea debe realizarse dentro de la función
 "imprimir_vectores".

 A continuación, el programa debe calcular el promedio y el rango del
 primer vector llamando dentro del main a las funciones
 "calcular_promedio" y "calcular_rango"

 A continuación, el programa debe determinar los números que se
 encuentran en ambos vectores. Dichos números serán almacenados en un
 nuevo vector llamado 'vector3'. Esta tarea debe realizarse dentro de
 la función "elementos_en_comun".

 Notar que la función retorna la longitud del vector3 por medio del
 parámetro por referencia 'longitud3'. 

 Finalmente el programa debe construir una matriz de números reales
 tipo 'double' con longitud1 filas y longitud2 columnas tal que el
 elemento de la fila 'k' y columna 'n' es el elemento 'k' del vector1
 dividido por el elemento 'n' del vector2. Esta matriz debe calcularse
 dentro de la función "calcular_matriz".

 Nota: el programa debe verificar que el numerador de la división sea
 distinto de cero, en cuyo caso no realizará la división y completará
 el elemento correspondiente de la matriz con un cero. Posteriormente
 al cálculo de la matriz el programa debe imprimirla por pantalla
 dentro de la función "imprimir_matriz".


 -------------------------------------------------------------------
 Ejemplo 1 de la ejecución del programa:
  
 Ingrese la longitud del primer vector: 5
 Ingrese los numeros del primer vector: 4 5 2 8 9

 Ingrese la longitud del segundo vector: 4
 Ingrese los numeros del segundo vector: 3 7 0 5

 Los vectores ingresados son:
 Primer vector  = 4 5 2 8 9 
 Segundo vector = 3 7 0 5 

 El promedio del primer vector es: 5.6

 El rango del primer vector es: 7

 Los numeros que estan en ambos vectores son: 5 

 La matriz es: 
    1.33   0.571       0     0.8
    1.67   0.714       0       1
   0.667   0.286       0     0.4
    2.67    1.14       0     1.6
       3    1.29       0     1.8

 -------------------------------------------------------------------
 Ejemplo 2 de la ejecución del programa:
  
 Ingrese la longitud del primer vector: -2

 ERROR: la longitud tiene que ser > 0 
 Ingrese la longitud del primer vector: 4
 Ingrese los numeros del primer vector: 4 3 2 1

 Ingrese la longitud del segundo vector: 13

 ERROR: la longitud tiene que ser < 10
 Ingrese la longitud del segundo vector: 5
 Ingrese los numeros del segundo vector: 5 2 0 4 3 

 Los vectores ingresados son:
 Primer vector  = 4 3 0 1 
 Segundo vector = 5 2 0 4 3 

 El promedio del primer vector es: 2.5

 El rango del primer vector es: 3 0

 Los numeros que estan en ambos vectores son: 4 3 2 

 La matriz es: 
     0.8       2       0       1    1.33
     0.6     1.5       0    0.75       1
     0.4       1       0     0.5   0.667
     0.2     0.5       0    0.25   0.333

 -------------------------------------------------------------------   
*/

// Bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;

const int MAX = 10; 

void cargarvectores(int vector1[MAX],int vector2[MAX], int longitud1,int longitud2);
void imprimirvectores(int vector1[MAX],int vector2[MAX],int  longitud1,int longitud2);
double calcular_promedio(int vector1[MAX], int longitud1);
int elementos_en_comun(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2,int& longitud3);
void calcular_matriz(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2);
void imprimir_matriz(double Matriz[MAX][MAX],int longitud1,int  longitud2);


int main() 
{
   int vector1[MAX], vector2[MAX];

   int longitud1, longitud2,rango,longitud3;
  
   double matriz[MAX][MAX], promedio;
   
   
	cout<<"ingrese la longuitud del 1er vector : "<<endl;
	cin>>longitud1;
	
	
  	cout<<"\ningrese la longuitud del 2do vector : "<<endl;
	cin>>longitud2;
	
   
 		cargarvectores(vector1, vector2, longitud1, longitud2);
	
 imprimirvectores(vector1, vector2, longitud1, longitud2);

 promedio = calcular_promedio(vector1, longitud1);

  cout << "\n\nEl promedio del primer vector es: " << promedio<<endl;

//   rango = calcular_rango(vector1, longitud1);
//   cout << "\n\n El rango del primer vector es: " << rango;
  
     cout <<"\nLos numeros que estan en ambos vectores son : ";
  
	elementos_en_comun(vector1, vector2, longitud1, longitud2,longitud3);
   	
   	cout<<"\nCantidad que veces que se repiten : "<<longitud3<<endl;   
     
     
	calcular_matriz(vector1,vector2,longitud1, longitud2);
//   imprimir_matriz(matriz, longitud1, longitud2);
   
}


void cargarvectores(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2)
{
	
	cout<<"ingrese los "<<longitud1<<" elementos del vector 1 :"<<endl;
	
   for(int i=0;i<longitud1;i++)
   cin>>vector1[i];
   
   
   cout<<"ingrese los "<<longitud2<<" elementos del vector 2 :"<<endl;
   
   for(int j=0;j<longitud2;j++)
   cin>>vector2[j];
   
}

void imprimirvectores(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2)
{
	cout<<"el vector 1 es: ";
	
  for(int i=0;i<longitud1;i++)
  	{	cout<<" "<<vector1[i]<<" ";}
  		  		
  	cout<<"\nel vector 2 es: ";	
  	
  for(int j=0;j<longitud2;j++)
  	{	cout<<" "<<vector2[j]<<" ";}
  	cout<<endl;
}		

double calcular_promedio(int vector1[MAX], int longitud1)
{ double cont;
  double prom;
          for(int i=0;i<longitud1;i++)
          		cont+=vector1[i];
   
   prom=cont/longitud1;
   return prom;
}

///* tipo de dato que retorna */ calcular_rango(/* argumentos */)
//{
//   // Escriba el código aquí
//}

int elementos_en_comun(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2,int& longitud3)
{
	
	int vector3[MAX];
	
  for(int i=0;i<longitud1;i++)
      {for(int j=0;j<longitud2;j++)
  			{if(vector1[i]==vector2[j])
  			     	{vector3 [longitud3++]=vector1[i];
					   cout<<vector1[i]<<" ";}	 				
				}		
		}					 			  	
}

void calcular_matriz(int vector1[MAX],int vector2[MAX], int longitud1,int  longitud2)
{
	double mat[MAX][MAX];
 		for(int i=0;i<longitud1;i++)
 			for(int j=0;j<longitud2;j++)
 					
 				mat[i][j]=(double)vector1[i]/(double)vector2[j];
 				
 				
 			imprimir_matriz(mat,longitud1,longitud2);	
}

void imprimir_matriz(double Matriz[MAX][MAX],int longitud1,int  longitud2)
{
 
    for (int i=0; i < longitud1; i++) {
        cout <<setw(2)<< endl;
        for (int j=0; j < longitud2; j++) 
            cout <<setprecision(2)<<setw(2)<<Matriz[i][j] << "  "; 
    }
    cout << endl;
}
