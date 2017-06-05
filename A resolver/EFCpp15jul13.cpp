/************************************************************
 MATERIA : INFORMATICA
 EXAMEN : Examen Final- 15 de julio 2013
 NOMBRE : 
 MATRICULA : 
 CARRERA : 
 COMISION : 
 ************************************************************

Realice un programa en C++ para realizar lo siguiente:

1) Dada una matriz cuadrada M de dimension NxN, donde N es una constante entera, 
cargar dicha matriz con valores enteros ingresados por teclado, verificando
que cada valor sea mayor que 0 y menor o igual que 5. En caso de ingresar un valor invalido, 
se debe pedir nuevamnete el ingreso del valor hasta que este sea valido. El 
procedimiento de carga de la matriz debe implementarse a traves de la funcion 
con el siguiente prototipo:

void cargarMatriz ( int M[N][N] );

2) Mostrar en pantalla desde el programa principal la matriz ingresada separando
cada fila con una linea en blanco a través del procedimiento con el siguiente 
prototipo:

void mostrarMatriz ( int M[N][N] );

3) Generar el vector D resultante de sumar los elementos de la diagonal principal 
(de izquierda a derecha) y a la diagonal secundaria (de derecha a izquierda) por
columna. Es decir, cada elemento del vector resultante debe ser igual a la suma
de los elementos de las diagonales que corresponden a la misma columna.

void sumaDiagonales ( int M[N][N], D[N] );

4) Generar el vector B resultante de sumar los bordes de la matriz M. Es decir,
que cada elemento del vector debe ser la suma 4 elementos correspondientes a
distintos bordes. Por ejemplo, el primer elemento del vector debe cooresponder
a la suma del primer elemento de la primera y ultima fila, y del primer elemento
de la primera y ultima columna.

void sumaBordes ( int M[N][N], B[N] );

5) Generar un nuevo vector V que contenga todos los elementos de los vectores D y B
ordenados en forma ascendente.

void generarVector ( int D[N],  int B[N], int V[2*N]);

5) Contar la cantidad de valores repetidos en el vector V y devolver la cantidad
a traves de la siguiente funcion.

int contarRepetidos ( int V[2*N] );

=========================================================
 EJEMPLO DE EJECUCION O CORRIDA DEL PROGRAMA PARA N=3 
=========================================================
Ingrese los valores de la fila 1 :   1 3 2 
Ingrese los valores de la fila 2 :   2 5 3 
Ingrese los valores de la fila 3 :   11 
Ingrese un nuevo valor válido: 2 2 1 


La matriz ingresada es:

   1 3 2 

   2 5 3 

   2 2 1


El vector resultante de sumar las diagonales por columna es:

   3 10 3

El vector resultante de sumar los bordes es:

   6 10 6

El vector ordenado resultante de combinar los vectores anteriores es:

   3 3 6 10 10 

y posee 2 elementos repetidos.

=========================================================
Tabla de Correccion
_________________________________
Funcion cargarMatriz        | 10
Funcion mostrarMatriz       | 05
Funcion sumaDiagonales      | 15
Funcion sumaBordes          | 15
Funcion generarVector       | 20
Funcion contarRepetidos     | 15
Programa Principal          | 10
Compilacion	                | 10
=========================================================

 Estimado alumno no modifique nada del codigo que le proveemos, 
 use los procedimientos o funciones que estan definidos y no 
 agregue mas a la solucion.
************************************************************/



