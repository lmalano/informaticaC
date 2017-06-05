//TRABAJO PRACTICO 2 INFORMATICA - LEANDRO MALANO - ING EN COMP - 3/5/2015

#include <iostream>
#include <stdio.h>

using namespace std;

void ingresarnotas(int nota);
void mostrarnotas();
int nota, cnt_notas,max_notas,acu_notas = 0;





int main()
	{

	do 	
		{
		cout<<"ingrese la calificacion : ";
		cin>>nota;	//ingresa cada calificacion
    	ingresarnotas(nota);//funcion q evalua la notas
		
		}while (nota!=999);
		mostrarnotas();
  	}

void ingresarnotas(int nota)
{
	
if (nota ==999) return; 
if (nota<=0 || nota>100)
	{
	printf("nota invalida, no sera computada\n");
	return;
	}		
if (nota > max_notas) max_notas = nota; 
++cnt_notas; 
acu_notas += nota;
}

	

   	
void mostrarnotas()
{
printf("================================\n");
printf("resultado\n");
printf("================================\n");
printf("nota maxima              : %d\n",max_notas);
printf("cantidad de notas validas: %d\n",cnt_notas);
printf("promedio de notas validas: %.2f\n",(float) acu_notas/(float)cnt_notas );
printf("================================\n");

}

		
