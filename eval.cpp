#include<iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int const N=10;
int const M=10;

void cargarMatriz ( int D[N][M],int f ,int c);
void mostrarMatriz ( int D[N][M],int f,int c);
int determinarMayor ( int D[N][M],int f, int c );
int determinarMenor ( int D[N][M],int f, int c);
void ij (int D[N][M],int i, int j,int f, int c);
int sumaelem(int D[N][M],int f,int c);//suma de todos los elem de la matriz
void vectormatriz(int D[N][M],int f,int c); 
void diag(int D[N][M],int f,int c);// da diagonal
int sumadiag(int D[N][M],int f,int c);//suma de los elem de la diag
void Triangular_Sup (int D[N][M],int f,int c);//da triang sup
void Triangular_Inf (int D[N][M],int f,int c);//da triang inf
int sumadiagsup(int D[N][M],int f,int c); //suma matriz diag sup
int sumadiaginf(int D[N][M],int f,int c);//suma matriz diag inf
void matriztrampuesta (int D[N][M],int f,int c);//da matriz trampuesta
bool validarfila (int f);
void oredenarmatrizmetburb(int D[N][M],int f,int c);
void sumafila(int D[N][M],int f,int c);
void sumacol(int D[N][M],int f,int c);
void matrizdiagsupnula(int D[N][M],int f,int c);//da diag sup nula
void matrizdiaginfsupnula(int D[N][M],int f,int c);//da diag con 0 arriba y abajo
void matrizdiaginfnula(int D[N][M],int f,int c);  //da diag inf nula
void copiarmatriz (int D[N][M],int f ,int c,int M[N][M]) ;


int main () 
{
    int col,fil;
    int D[N][M],M[N][M];
    int a,b,i,j; 
   	
    cout<<"ingrese la cant de columnas"<<endl;
    cin>>col;
    cout<<"ingrese la cant de filas"<<endl;
    cin>>fil; 
   
   

   		 
   		  
	  
	  
     cout<<"\nsi la fila es menor a N da 0 y si es mayor, da 1 : \n"<<validarfila (fil)<<endl;

    
    
    cargarMatriz(D,fil,col);
    mostrarMatriz(D,fil,col);
    copiarmatriz (D,fil,col,M);
    cout<<endl;
    
    cout<< "Mayor:"<< determinarMayor(D,fil,col)<<endl;
    cout<< "Menor:"<< determinarMenor(D,fil,col)<<"\n"<<endl;
   
    cout<<"ingrese la pos de fila [i] : ";
    cin>>i;
    cout<<"ingrese la pos de columna [j] : ";
    cin>>j;
  
      ij(D,i,j,fil,col);
     cout<<endl;
     
   vectormatriz(D,fil,col);
     

   cout<<"la suma de todos los elementos de la matriz es igual a : "<<sumaelem(D,fil,col)<<endl;
   cout<<"la suma de todos los elementos de la matriz diagonal superior es igual a : "<<sumadiagsup(D,fil,col)<<endl;
   cout<<"la suma de todos los elementos de la matriz diagonal inferior es igual a : "<<sumadiaginf(D,fil,col)<<endl;
    cout<<"la suma de todos los elementos de la diagonal es : "<<sumadiag(D,fil,col)<<endl; 
 
   
   
  cout<<"la diagonal es : ";
   diag(D,fil,col);
   
 
   
   
  
   cout<<endl;
   Triangular_Sup (D,fil,col);
   cout<<endl;
   Triangular_Inf (D,fil,col);
   cout<<endl;
    
   matriztrampuesta(D,fil,col);
   
     
    oredenarmatrizmetburb(D,fil,col);
    mostrarMatriz(D,fil,col);
    
  sumafila(D,fil,col);
  sumacol(D,fil,col);
  matrizdiagsupnula(D,fil,col);
  matrizdiaginfsupnula(D,fil,col);
  matrizdiaginfnula(M,fil,col);
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

void copiarmatriz (int D[N][M],int f ,int c,int M[N][M])
{
     cout << "Ingrese los valores de la fila y la columna:";
    for (int i=0; i < f; i++) {
        for (int j=0; j < c; j++) 
            M[i][j]= D[i][j]; }
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
  { 	cout<<"el numero de la posicion es : ";
  
  cout<<D[i-1][j-1];       } 
	else
	{cout<<"pocision invalida"<<endl;}
}

int sumaelem(int D[N][M],int f,int c)
{int prom;

	for (int i=0; i < f; i++) 
      for (int j=0; j < c; j++)
        prom+=D[i][j];	
	return prom;
}

void vectormatriz(int D[N][M],int f,int c)
{

 int fc=f*c;
 int *V;
 int  t=0;
  V= (int *) malloc(sizeof(fc));
  
	  for (int j=0; j < c; j++)       
	  	for (int k=0; k < f; k++)	   
		   V[t++]=D[j][k];
	
for(int l=0;l<fc;l++)
 cout<<V[l]<<" ";
 
 }

void diag(int D[N][M],int f,int c)
{
	for (int i=0; i < f && i < c; i++)     
      cout<<D[i][i]<<" ";
	
}

int sumadiag(int D[N][M],int f,int c)
{
	int sumadiag;
		for (int i=0; i < f && i < c; i++)     
      sumadiag+=D[i][i];
	
return sumadiag;	
}

void Triangular_Sup (int D[N][M],int f,int c)
{
      
      for (int i=0;i<f;i++){
      	for (int j=0;j<c;j++){
            	cout<<" ";
              if(i<=j)
			    cout<<D[i][j];}
          cout<<endl;
          }
cout<<endl<<endl;
}

void Triangular_Inf (int D[N][M],int f,int c)
{
      
      for (int i=0;i<f;i++){
      	cout<<endl;
          for (int j=0;j<c;j++){
            
              if(i>=j)
			    cout<<D[i][j]<<" ";}
          
          }
cout<<endl;
}

int sumadiagsup (int D[N][M],int f,int c)
{
  int b; 
  
      for (int i=0;i<f;i++){
      	
          for (int j=0;j<c;j++){ 	
              if(i<=j)
              
			    b+=D[i][j];
				
				}        
}

return b;}


int sumadiaginf(int D[N][M],int f,int c)
{
  int b; 
  
      for (int i=0;i<f;i++){
      	
          for (int j=0;j<c;j++){ 	
              if(i>=j)
              
			    b+=D[i][j];
				
				}        
}

return b;}

void matriztrampuesta (int D[N][M],int f,int c)
{	cout<<"la matriz trampuesta es : "<<endl;
	int aux;

  	
	   for (int i=0; i < f; i++) {
        cout << endl;
        for (int j=0; j < c; j++) 
            cout << D[j][i] << " "; 
    }
    cout << endl;
	  		
}

bool validarfila (int f)
{
	if(f<=N)
	return true;
	
	else
	return false;
}

void oredenarmatrizmetburb(int D[N][M],int f,int c)
{
	cout<<"la matriz ordenada es : "<<endl;
	int mayor=0;
	
	  for(int i=0; i<f; i++)
     {
        for(int j=0; j<c; j++)
        {
            for(int x=0; x<f;x++)
            {
                for(int y=0; y<c; y++)
                {
                    if(D[i][j]<D[x][y])
                    {
                        mayor=D[i][j];
                        D[i][j]=D[x][y];
                        D[x][y]=mayor;
                    }
 
                }
            }
         }
    }
}


void sumafila(int D[N][M],int f,int c)

{ 
	int vf[N];
	int suma;
	
	for(int i=0;i<f;i++)
	{
	int  suma=0;
  
  
    for(int j=0;j<c;j++)
    {
        suma+=D[i][j];
    }
    vf[i]=suma;
    cout<<"suma de la fila "<<i+1<<" : "<<vf[i]<<endl;
    }
}

void sumacol(int D[N][M],int f,int c)
{
	
	int vc[N];
	int suma;
	
for(int j=0;j<c;j++)
{
   int suma=0;
   
    for(int i=0;i<f;i++)
    {
        suma+=D[i][j];
    }
   vc[j]=suma;
   cout<<"suma de la columna "<<j+1<<" : "<<vc[j]<<endl;
	}
}

void matrizdiagsupnula(int D[N][M],int f,int c)
{      
      for (int i=0;i<f;i++){
      	
          for (int j=0;j<c;j++){
            	
              if(i<j)
              D[i][j]=0;
			  cout<<D[i][j]<<" ";}
			 			    
          cout<<endl;
          }
cout<<endl<<endl;
	
}

void matrizdiaginfsupnula(int D[N][M],int f,int c)
{      
      for (int i=0;i<f;i++){
      	
          for (int j=0;j<c;j++){
            	
              if(i>j)
              D[i][j]=0;
			  cout<<D[i][j]<<" ";}
			 			    
          cout<<endl;
          }
cout<<endl<<endl;	
}

void matrizdiaginfnula(int D[N][M],int f,int c)
{      
      for (int i=0;i<f;i++){
          for (int j=0;j<c;j++){
              if(i>j)
              { D[i][j]=0;  } 
			  cout<<D[i][j]<<" ";}
	    
          cout<<endl;
          }
cout<<endl<<endl;
	         


}
