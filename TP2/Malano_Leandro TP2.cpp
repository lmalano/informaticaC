//TRABAJO PRACTICO 2 INFORMATICA - LEANDRO MALANO - ING EN COMP - 3/5/2015

#include <iostream>

using namespace std;

void ingresarnota(int a);

int main()
{
  int a,n,nv;
  int temp=0;
  int may=0;
  int *pro;
 	cout<<"ingrese la cantidad de calificaciones deseadas :"<<endl;
 	cin>>n; //ingreso de cantidad de calificaciones
 	
	for(int i=0;i<n;i++)
	{cout<<"ingrese su calificacion numero "<<i+1<<" :"<<endl;
	cin>>a;	//ingresa cada calificacion
	
	if(a>0 && a<=100)
	{temp=temp+a; //acumulador de calificaciones para luego dividirla por n
		if(a>may) //saca selecciona la mayor calificacion
		may=a;//asignacion del mayor valor
		nv++;}// valor q se incrementa para la notas validas
	
	else if(a== 999)
	{cout<<"CODIGO ACTIVADO :\n"<<endl;
	pro=&temp;
	cout<<"cantidad de calificaciones validas :"<<nv<<endl;
	cout<<"El promedio de las notas ingresadas es :"<<(*pro)/(nv)<<endl;
	cout<<"la nota mayor es :"<<may<<endl;
	}

    ingresarnota(a);//funcion q evalua la notas
	}
	
		
   system("PAUSE");
  return 0; }

void ingresarnota(int a)
{
	 if(a==999)
	 {	 }
	 
	 else if (a<0 || a>100)
   {cout<<"nota invalida, no sera computada"<<endl;}
	
    else if(a<=20)
   cout<<"usted le fue muy muy  mal"<<endl;
 
   else if(a<=40)
   cout<<"usted le fue  mal"<<endl;
    
   else if(a<=59) 
   cout<<"usted no le fue tan mal,pero no aprobo"<<endl; 
   
   else if(a<=70 )
   
   cout<<"usted le fue bien"<<endl; 
   
   else if (a<=80)
   
   cout<<"usted le fue mas que muy bien"<<endl;
   
    else if (a<=100)
   
   cout<<"has aprobado comodamente!!!"<<endl;		
}	
	
