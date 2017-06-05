///////////////////////////////////////////

// INFORMATICA 2015

// TRABAJO PRACTICO: 3

// APELLIDO: Malano

// NOMBRES: Leandro

// MATRICULA: 38883701

//

// COMISION: 2.5

//////////////////////////////////////////

#include<iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int const NMAX=4;
int const M=10;

void cargarMatriz ( int m[NMAX][M],int c);
void mostrarMatriz ( int m[NMAX][M],int c);
int parimpar ( int m[NMAX][M],int c);
void filas ( int m[NMAX][M],int c);
void exp (int m[NMAX][M],int c);

int main()
{

 		int N;
    int m[NMAX][M];
	
   
    cout<<"Ingresar cantidad de columnas (N), que sean menor de 10: "<<endl;
     
  	
  	do{	cin>>N;
	  	if(N>M)
	  cout<<"papanata, N tiene que ser menor de 10, pone de nuevo el valor salame :"<<endl;
	  			}
  		while(N>M);
  	
   	cargarMatriz(m,N);
    mostrarMatriz(m,N);
    parimpar(m,N);
    filas(m,N);
    
exp (m,N);
    
	return 0;}

void cargarMatriz ( int m[NMAX][M],int c) 
{
     cout << "Ingrese los valores de la fila y la columna:";
    for (int j=0; j < c; j++) {
        for (int i=0; i < NMAX; i++) 
            cin >> m[i][j]; }
}

void mostrarMatriz ( int m[NMAX][M],int c ) 
{
    cout << "La matriz ingresada es:" << endl;
    for (int i=0; i < NMAX; i++) {
        cout << endl;
        for (int j=0; j < c; j++) 
            cout << m[i][j] << " "; 
    }
    cout << endl;
}

int parimpar ( int m[NMAX][M],int c)
{	
	int a=0;
	int b=0;
	int cb=0;
	for (int i=0; i < NMAX; i++)
		for (int j=0; j < c; j++)
			{
				if(m[i][j]%2==0 && m[i][j]!=0)
					{a++;		}
				if(m[i][j]%2!=0)
					{b++;}
				if(m[i][j]==0)
					{cb++;}	
				 	     	}
		cout<<"\nCantidad de elementos pares: "<<a;
		cout<<"\nCantidad de elementos impares: "<<b;
		cout<<"\nCantidad de elementos nulos: "<<cb<<endl;					
}

void filas ( int m[NMAX][M],int c)
{	int b=0;
		int e=0;

	double a,d;
	for (int i=0; i < NMAX; i++)
		for (int j=0; j < c; j++)
			{	if(i%2!=0 && m[i][j]>0)
					{ a+=m[i][j];
					 b++;}
					
				if(i%2==0 && m[i][j]>0)	
					{ d+=m[i][j]; e++;}
					
						}
	cout<<"Promedio de elementos mayores que 0 en filas pares: "<<setprecision(3)<<a/b;					
	cout<<"\nPromedio de elementos mayores que 0 en filas impares: "<<setprecision(3)<<d/e<<endl;	
									
}


void exp (int m[NMAX][M],int c)
{

char nombre[50];
cout<<"\nIndique nombre de archivo para almacenar la suma de los elementos mayores de 0 de cada columna: "<<endl;
cin>>nombre;

	ofstream guardar;
	guardar.open(nombre);
	
	
	
for (int i = 0; i < c; i++){
	

	int suma = 0;	
	
		for (int j = 0; j < NMAX; j++){
			
			if (m[j][i]>0)	
				suma+=m[j][i];
			}	
			
	guardar<<setw(3) << suma;

	}
	cout<<"\nArchivo guardado sastifechamente!!!"<<endl;
	guardar.close();
	}
