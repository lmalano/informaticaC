/* **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificación de Algoritmos - 22 de noviembre de 2013
 NOMBRE    : Malano, Leandro       
 MATRICULA : 38883701
 CARRERA   : Ingenieria en Computacion
 COMISION  : 1.5
 **************************************************************

Requerimientos Generales

 Realice un programa en C++ cuyo objetivo es recolectar las mediciones
 de N sensores de temperatura, donde cada sensor tiene almacenada una
 cantidad variable de valores sensados, procesar información de los
 sensores y mostrarla por pantalla.
 
 
Requerimientos Generales

 
 1) El programa debe llamar desde el "main" a la funcion "leerVector" cuyo 
 prototipo es:

    void leerVector(int cant[N], int dim_cant);
   
 Dicha funcion debe leer por teclado "dim_cant" valores enteros
 mayores que 0 y menores que el valor MAX. Los valores N y MAX deben
 ser constantes enteras globales, las cuales pueden ser configuradas
 desde el código fuente. En caso de ingresar un valor fuera del rango
 de validez, debe informarse por pantalla un error y solicitar el
 ingreso de un nuevo valor hasta que el mismo sea correcto. Los
 valores ingresados deben ser almacenados en un vector de "dim_cant"
 elementos, donde cada elemento i representa la cantidad de mediciones
 disponibles en el sensor i.
 
 2) El programa debe llamar desde el "main" a la funcion "cargarMediciones" cuyo 
 prototipo es:
  
    void cargarMediciones(int cant[N], double med[N][MAX], int dim_cant);
   
 Dicha funcion debe leer por teclado las mediciones disponibles en cada uno
 de los sensores, cuya cantidad se encuentra en el vector cant[N], y  
 almacenarlas por fila en una matriz de N x MAX elementos. Es decir, que para 
 cada sensor i, se deben cargar cant[i] mediciones en la fila i de la matriz. En
 el caso de ingresar valores menores a -50.0 o mayores a 50.0, las mediciones 
 deben ser considerada invalidas y "no deben almacenarse en la matriz". Al 
 finalizar la cargar de mediciones de un sensor en la fila, se debe actualizar 
 el vector cant[N] con el número efectivo de mediciones cargadas.    
 
 3) El programa debe llamar desde el "main" a la funcion "mostrarMediciones"
 cuyo prototipo es:
      
    void mostrarMediciones(int cant[N], double med[N][MAX], int dim_cant);
      
 Dicha funcion debe mostrar por pantalla las mediciones almacenadas de cada uno
 de los N sensores.
 
 4) El programa debe llamar desde el "main" a la funcion "contarPromedios" cuyo
 prototipo es:
 
     int contarPromedios(int cant[N], double med[N][MAX], int dim_cant);
     
 Dicha funcion debe devolver la cantidad de sensores cuyo promedio de mediciones
 es mayor que 0..
 
 5) El programa debe llamar desde el "main" a la funcion "detMaxMin" cuyo
 prototipo es:
 
     void detMaxMin (int cant[N], double med[N][MAX], int& Max, int& Min, int dim_cant);
     
 Dicha funcion debe determinar los sensores que registraron la mayor y menor
 temperatura.    
 
 6) Finalmente, el programa debe imprimir desde el "main" la cantidad de 
 sensores con promedios mayores que cero, y los sensores que registraron los 
 valores de temperatura maximo y minimo.

-------------------------------------------------------------------------------
 # Ejemplo de la ejecución del programa para N=2 (2 sensores) y M=3:

Ingrese la cantidad de mediciones para el sensor 0 : 4
La cantidad ingresada es invalida, ingresela nuevamente : 3
Ingrese la cantidad de mediciones para el sensor 1 : 2

Ingrese la medicion 0 para el sensor 0 : 10
Ingrese la medicion 1 para el sensor 0 : -51
Ingrese la medicion 2 para el sensor 0 : 23
Ingrese la medicion 0 para el sensor 1 : -2
Ingrese la medicion 1 para el sensor 1 : -17

Mediciones para sensor 0 : 10 23
Mediciones para sensor 1 : -2 -17

La cantidad de sensores con promedios mayores a 0 es : 1
El sensor con el valor maximo es el : 0
El sensor con el valor minimo es el : 1
*/

#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;
const int  N=10, MAX=50; 
int dim_cant;

//Prototipos
void leerVector(int cant[N],int dim_cant);
void cargarMediciones(int cant[N], double med[N][MAX],int dim_cant);
void mostrarMediciones(int cant[N], double med[N][MAX],int dim_cant);
int contarPromedios(int cant[N], double med[N][MAX],int dim_cant);
void detMaxMin (int cant[N], double med[N][MAX], int& Max, int& Min,int dim_cant);

// Programa Principal
int main () 
{
    //Declaracion de variables
    int vector[N],max,min; 
    double cantPromedio;
    double mediciones[N][MAX]; 
    int n;

    cout<<"ingrese la cantidad de sensores a ingresar:"<<endl;
    cin>>n;
    leerVector(vector,n);
    cout<<" "<< endl;
 
    cargarMediciones(vector, mediciones,n);
    cout << endl <<endl;
 
    mostrarMediciones(vector, mediciones,n);
    cout <<" "<< endl;
 
    cantPromedio=contarPromedios(vector, mediciones,n);

    detMaxMin(vector, mediciones, max, min,n);
 
    cout<<"cantidad de sensores cuyo promedio de mediciones es mayor que 0: "<< cantPromedio << endl;
    cout<<"El valor maximo de temperatura esta en el sensor: "<< max+1 << endl;
    cout<<"El valor minimo de temperatura esta en el sensor: "<< min+1 << endl;
 
    system("PAUSE");
    return 0;
}


void leerVector(int cant[N],int dim_cant)
{
     
   for (int i=0; i<dim_cant; i++)
   {
       cout << "Ingrese la cantidad de mediciones del sensor " <<i+1<< ": "; 
       cin >> cant[i];                                                         
 
    
       while (cant[i]<1 || cant[i]>MAX)
       {
             cout << "La cantidad no valida, ingreselo nuevamente: ";
             cin >> cant[i];
       }
   }

}   

void cargarMediciones(int cant[N], double med[N][MAX],int dim_cant)
{
     int valor, cont;
     for (int i=0; i<dim_cant; i++)
     {
         cont = 0;
         for (int j=0; j<cant[i]; j++)
         {
             cout << "Ingrese la medicion " << j+1 << " para el sensor " << i+1 << ": ";
             cin >> valor;
 
            //condicion del valor a ingresar
             if (abs(valor) <= 50)
             {   
                med[i][cont] = valor;
                cont++;
             }
         }
        
         cant[i] = cont;
     }
}

void mostrarMediciones(int cant[N], double med[N][MAX],int dim_cant)
{
     for (int i=0; i<dim_cant; i++)
     {
         cout << "Las Mediciones del sensor son" << i+1 << ": ";
 
         for (int j=0; j<cant[i]; j++)
             cout << med[i][j] << " ";
 
         cout << endl;
     }    

}

int contarPromedios(int cant[N], double med[N][MAX],int dim_cant)
{
    int cont=0;
    double suma; 
    for (int i=0; i<dim_cant; i++)
      {
          suma = 0;
          for (int j=0; j<cant[i]; j++)
             suma += med[i][j];
 
          if (suma/cant[i] > 0.0)
             cont++;
      }
 
    return cont;

}

void detMaxMin (int cant[N], double med[N][MAX], int& Max, int& Min,int dim_cant)
{
     double maximo = med[0][0]; 
     double minimo = med[0][0];
 
     for (int i=0; i<dim_cant; i++)
       {
           for (int j=0; j<dim_cant; j++)
           {
               if (med[N][MAX] > maximo)
               {  
                  maximo = med[N][MAX];
                  Max = i;
               }
 
               if (med[N][MAX] < minimo)
               {
                  minimo = med[N][MAX];
                  Min = i;
               }
           }
       }
}

/* TABLA DE CALIFICACION:
  /10 Principal  
  /15 leerVector
  /20 cargarMediciones
  /10 mostrarMediciones
  /20 contarPromedios
  /15 detMaxMin
  /10 Compilacion
-----------------------
  Tot /100
*/
