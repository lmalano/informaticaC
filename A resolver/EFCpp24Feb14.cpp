/*
 **************************************************************
 MATERIA   : INFORMATICA
 EXAMEN    : Especificaci&oacute;n de Algoritmos -  24 de Febrero 2014
 NOMBRE    : 
 MATRICULA : 
 CARRERA   : 
 COMISION  : 
 **************************************************************

 Estimado alumno no modifique nada del cdigo que le proveemos, 
 use los procedimientos o funciones que est&aacute;n definidos y no 
 agregue otros a la solucion.
 
 Realice un programa en C++ que, pretendiendo poner en funcionamiento un Automata Celular,  
 muy rudimentario conformado por una grilla de 0 y 1, responda a:

 1°; La definicion del nombre simbolico 'N', como el tama&ntilde;o asignado en memoria para &quot;AutCel&quot; (matriz cuadrada)
 de enteros 0 y 1 que se ingresar&aacute;n por teclado. 
 2°; La lectura de &quot;AutCel&quot; debe realizarse desde el teclado, previo a solicitar al 
 usuario el tama&ntilde;o 'n' de la que efectivamente &eacute;l est&aacute; usando. 
 3°; El programa debe validar tanto el ingreso de un valor de 'n' admisible (n&lt;N) como el de cada uno de
 los elementos de &quot;AutCel&quot; (enteros 0 o 1), interactuando con el usuario de forma tal que puede identificar
 su error y corregirlo tantas veces como sea necesario.
 4°; El programa debe controlar que el usuario no ingrese un &quot;AutCel&quot;  en el cual todos sus elementos tienen
 el valor 1, mostrando la leyenda: 'Usted ha ingresado valores  correponsdientes a un Automata que este 
 programa no puede procesar, intente nuevamente,  evitando usar automatas con id&eacute;ntico estado para todos 
 sus elementos'.
 5°; Mediante la funcion &quot;EvolucionaAut&quot;, cuyo prototipo se indica, modifique cada elemento de &quot;AutCel&quot;
 conforme a las siguientes reglas:
 	a) No modifique los elementos de los bordes de &quot;AutCel&quot;
 	b) Que considere vecinos inmediatos a los directos a &eacute;l, en: vertical, horizontal y diagonal.
	c) Si su valor actual es 1, la suma de los vecinos de la fila de arriba es distinta de 0 y 
	la de los de abajo menor que 2, que evolucione a 0.
	b) Si su valor actual es 1, para cualquier situacion distinta de sus vecinos inmediatos distinta de la anterior, 
	que no se modifique.
	c) Si el valor actual es 0, la suma de los vecinos de la columna derecha es 2 y la de los de izquierda mayor que  
	que 1, que evolucione a 1.
	c) Si el valor actual es 0, para cualquier otro  valor de sus vecinos inmediatos, que no se modifique.
 
 prototipo: 
   void EvolucionAut(int AutCel[N][N], int n);
   
 6°; Que despliegue por pantalla el estado actual de &quot;AutCel&quot; y el numero de evolucion (la primera vez es 1)
  mendiante una funcion 
   prototipo: void Imprimir(int AutCel[N][N], int e);
   
 7°; Que consulte al usuario si quiere continuar con otra evolucion, en caso afirmativo, que se dirija
 nuevamente a la funcion EvolucionaAut&quot; y luego a la funcion &quot;Imprimir&quot; para mostrar el estado del 
 Automata y su n&uacute;mero de evolucion.

  
 # Ejemplo del fucionamiento del  programa:
  Suponga que la dimension efectiva es 4
   
  y, el Automata ingresado y validado es, por ejemplo:
 
   1  0  0  1
   0  1  1  1 
   1  0  1  0
   1  1  0  1

   Recordando que los elementos del borde NO se modifican y luego de su primer evolucion, deberia resultar:
   

  	1  0  0  1
    0  1  0  1 
    1  0  1  0
    1  1  0  1  
 
*/

// Escriba el codigo aqui


#include<iostream>;
using namespace std;



// Programa Principal




int main () 
{
  

   return 0;
}

// defina las funciones aqui



/* TABLA DE CALIFICACION:
  /5   1°; &iacute;tem  
  /10   2°; &iacute;tem
  /20  3°; &iacute;tem 
  /10  4°; &iacute;tem
  /30  5°; &iacute;tem
  /15  6°; &iacute;tem
  /10  7°; &iacute;tem
-----------------------
  Tot /100
/*
</p></pre>
