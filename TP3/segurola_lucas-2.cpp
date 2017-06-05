///////////////////////////////////////////

// INFORMATICA 2015

// TRABAJO PRACTICO: 3

// APELLIDO: Segurola	

// NOMBRES: Lucas

// MATRICULA: 38785612

//

// COMISION: 2.5

//////////////////////////////////////////

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
using namespace std;

int const M = 10;

int parimpar(int);
void filas(int[4][M], int);
char nombre[100];

int main()
{	
	int N, mat[4][M];
	int par=0, impar=0, nulo=0,suma;

	
	cout << "Ingrese la cantidad de columnas que desea para la matriz, debe ser mayor a 2 y menor o igual a '10'(N): ";
	
	do{
		cin >> N;
		if (N > 10 || N < 2 )
		cout << "ERROR: para continuar, por favor ingrese un valor valido: ";	
	}
	while(N > 10 || N < 2 );
	
	
	cout << "\nCorrecto, para continuar ingrese los valores de la matriz: \n";
	
	for (int i=0; i<N;i++)
		for (int j = 0; j < 4; j++){
		cout <<"\nValor correspondiente a la ubicacion '"<<j<<"' '"<<i<<"': ";
		cin >> mat[j][i];	
		}	
		
	cout<< endl<<endl;
	
	cout << "Valores almacenados correctamente.\n\n";
	
	for (int i=0; i<4;i++){					
		for (int j = 0; j < N; j++)			
		cout<< setw(5) << mat[i][j];
		
		cout <<endl<<endl;
		
		
	}	

	for (int i=0; i<4;i++)				
		for (int j = 0; j < N; j++)
			switch (parimpar(mat[i][j]))
				{
				case 0:
					nulo++;
					break;
				case 1:
					impar++;
					break;
				case 2:
					par++;
					break;
				default: cout<<"\n\nERROR"; 
				}	
			
	cout << "\n\nCantidad de elementos pares: "<<par;

	cout << "\n\nCantidad de elementos impares: "<<impar;

	cout << "\n\nCantidad de elementos nulos: "	<<nulo;

	filas(mat,  N);	
	
	cout << "\n\nIngrese el nombre de archivo para almacenar la suma de los elementos mayores que 0 de cada columna: ";
	
	cin >> nombre;
	
	ofstream guardardatos;
	guardardatos.open(nombre);
	
	for (int i = 0; i < N; i++){

	suma = 0;	
	
		for (int j = 0; j < 4; j++){
			
			if (mat[j][i]>0)	
				suma+=mat[j][i];
			}	
			
	guardardatos <<setw(5)<< suma;
	
	
	}
	
	guardardatos.close();
	
	cout << "\n\nExito, presione enter para terminar el programa";
	 
	getch();
	
	return 0;
	
}

int parimpar(int valor)
{	
	int res=0;
	
	if (valor !=0 ){
		
		if (valor % 2 == 0)
		res = 2;
		else 
		res = 1;		
	}
	
	return res;
	
}

void filas(int matriz[4][M], int col)
{
	
	double par=0, impar=0, nulo=0;
	int elementos_par = 0, elementos_impar = 0;
	
	for (int i = 0; i < 4; i+=2)
		for (int j = 0; j < col; j++){
			
			if (matriz[i][j]>0){	
				par += matriz[i][j];
				elementos_par++;
			}					
			else 		
				nulo++;					
		}
	
	for (int i = 1; i < 4; i+=2)
		for (int j = 0; j < col; j++){
					
			if (matriz[i][j]>0){
				impar += matriz[i][j];
				elementos_impar++;	
			}			
			else 			
				nulo++;					
		}
	
	if(elementos_par == 0)
	cout << "\n\nPromedio de elementos mayores que 0 en filas pares: No hay elementos pares";
	else
	cout << "\n\nPromedio de elementos mayores que 0 en filas pares: "<<par/elementos_par;
	if(elementos_impar == 0)
	cout << "\n\nPromedio de elementos mayores que 0 en filas pares: No hay elementos impares";
	else
	cout << "\n\nPromedio de elementos mayores que 0 en filas impares: "<<impar/elementos_impar;
	
}
