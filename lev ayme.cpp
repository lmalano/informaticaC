#include <iostream>
using namespace std;


const int N=10;
const int M=10;

void cargarMatriz ( int D[N][M],int f ,int c);
void mostrarMatriz ( int D[N][M],int f,int c);
void mayorcadafila ( int D[N][M],int f,int c);
void menorcadafila ( int D[N][M],int f,int c);
void matrizcerosypares ( int D[N][M],int f,int c);

main()
{
 int col,fil;
    int A[N][M];
     
      
    cout<<"ingrese la cant de columnas"<<endl;
    cin>>col;
    cout<<"ingrese la cant de filas"<<endl;
    cin>>fil; 

	if(fil!=col)
	{cout<<"se saldra del programa";
	return 0;}
	
	cargarMatriz(A,fil,col);
	mostrarMatriz(A,fil,col);
	mayorcadafila(A,fil,col);
    menorcadafila(A,fil,col); 
	matrizcerosypares (A,fil,col);
	mostrarMatriz(A,fil,col);

system("pause");
      
      
      
	}


void cargarMatriz ( int D[N][M],int f,int c ) 
{
     cout << "Ingrese los valores de la fila y la columna:";
    for (int i=0; i < f; i++) {
        for (int j=0; j < c; j++) 
            cin >> D[i][j]; }
}

void mostrarMatriz ( int D[N][M],int f,int c ) 
{
    cout << "La matriz ingresada es:" << endl;
    for (int i=0; i < f; i++) {
        cout << endl;
        for (int j=0; j < c; j++) 
            cout << D[i][j] << " "; 
    }
    cout << endl;
}

void mayorcadafila ( int D[N][M],int f,int c)
{
	cout<<"\nMayor de cada fila : ";
	int a[]={0,0,0,0,0,0,0};//hago asi xq cuando despues hago el for para imprimirlo me da basura
	
	int may;
	for(int i=0;i<f;i++)
	{
		may=-999;
		for(int j=0;j<c;j++)
				{
					if (D[i][j]>may)
					{may=D[i][j];}
				}
				a[i]+=may;
	}
	
	for(int k=0;k<f;k++)
	cout<<a[k]<<" ";
	cout<<endl;
}

void menorcadafila ( int D[N][M],int f,int c)
{
	cout<<"\nMenor de cada fila : ";
	int a[]={0,0,0,0,0,0,0};//hago asi xq cuando despues hago el for para imprimirlo me da basura
	
	int men;
	for(int i=0;i<f;i++)
	{
		men=999;
		for(int j=0;j<c;j++)
				{
					if (D[i][j]<men)
					{men=D[i][j];}
				}
				a[i]+=men;
	}
	
	for(int k=0;k<f;k++)
	cout<<a[k]<<" ";
	cout<<endl;
}

void matrizcerosypares ( int D[N][M],int f,int c)
{
	
	for (int i=0; i < f; i++)
        for (int j=0; j < c; j++) 
        	if(D[i][j]%2!=0)
				D[i][j]=0;
	
}

