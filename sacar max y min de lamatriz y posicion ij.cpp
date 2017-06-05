#include<iostream>
using namespace std;

int const N=50;
int const M=50;

void cargarMatriz ( int D[N][M],int f ,int c);
void mostrarMatriz ( int D[N][M],int f,int c);
int determinarMayor ( int D[N][M],int f, int c );
int determinarMenor ( int D[N][M],int f, int c);
void ij (int D[N][M],int i, int j,int f, int c);

int main () 
{
    int col,fil;
    int D[N][M];
    int a,b,i,j; 
      
    cout<<"ingrese la cant de columnas"<<endl;
    cin>>col;
    cout<<"ingrese la cant de filas"<<endl;
    cin>>fil; 
      
      
    if(col==1 && fil==1)
    {cout<<"Matriz Invalida, se saldra del programa"<<endl;
    system("pause");
     return 0;}
    
    
    cargarMatriz(D,fil,col);
    mostrarMatriz(D,fil,col);
    
    cout<<endl;
    
    cout<< "Mayor:"<< determinarMayor(D,fil,col)<<endl;
    cout<< "Menor:"<< determinarMenor(D,fil,col)<<"\n"<<endl;
    
    cout<<"ahora ingresaremos las coordenadas [i][j] de la matriz para hallar el elemento.\n"<<endl;
    cout<<"ingrese la fila [i] donde se ubica el numero"<<endl;
    cin>>i;
    cout<<"ingrese la columna [j] donde se ubica el numero"<<endl;
    cin>>j;
  	
      ij(D,i,j,fil,col);
    
    system("pause");
    return 0;
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


int determinarMayor ( int D[N][M],int f, int c )
{
int mayor = D[0][0];

    for (int i=0;i < f; i++) 
         { 
             for(int j=0; j < c ;j++)
             {
              if(D[i][j]>mayor)    mayor=D[i][j];
             }
        }
         return mayor;
}
        
int determinarMenor ( int D[N][M],int f, int c)
{

int menor = D[0][0];

    for (int i=0; i < f ;i++) 
         { 
             for(int j=0;j < c;j++)
             {
              if(D[i][j]<menor)    menor=D[i][j];
                           }
        }
         return menor;
                 
}

void ij (int D[N][M],int i, int j,int f,int c)
{
  if(i<=f && j<=c)
  { cout<<"el elemento de la posicion [i] :"<<i<<" y [j] :"<<j<<" elegido es :"<<endl; 
  
  cout<<D[i-1][j-1]<<endl;       } 
	else
	{cout<<"error,ingrese nuevamente el valor"<<endl;}
}





