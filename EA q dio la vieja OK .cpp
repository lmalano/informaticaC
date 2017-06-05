#include<iostream>    
#include<stdlib.h> 


/*leer una matriz o ingresar, de dimencion n (matriz cuadrada o n*n) imprimirlos por columnas,
 ingresado por filas, validar que el n no supere la maxima dimension 
prevista para la matriz. determinar promedio de los elementos, por sobre la diagonal principal.
 cantidad de elementos pares en la zona por debajo de la diagonal principal
Generar un vector con elementos de la diagonal principal. Impreion en una funcion.
 Generar un vector con el acumulado de los elementos cuyo indice de columna sea 
impar */

using namespace std;

const int FIL=10;


void leerMatriz(int mat[FIL][FIL], int cant);
void impMat(int mat[FIL][FIL], int cant);
double promdiagsup(int mat[FIL][FIL],int cant);
int cantelempares(int mat[FIL][FIL],int cant);
void vectprincdiag(int mat[FIL][FIL],int cant,int vector[FIL]);
void imprvector(int vector[FIL],int cant);
void vectelemindimpar(int mat[FIL][FIL],int cant,int vector2[FIL]);



int main()
{   int matriz[FIL][FIL];
	int dim;
	int vectorpar[FIL];
	int vectorcolimpar[FIL];
	cout<<"ingrese la DIM de la matriz cuadrada"<<endl;
	cin>>dim;
	leerMatriz(matriz,dim);
	impMat(matriz,dim);
	cout<<"el promedio de la matriz diagonal sup es : ";
	cout<<promdiagsup (matriz,dim);
	cout<<"\nla cantidad de elementos pares de la matriz diagonal inferior es : ";
	cout<<cantelempares(matriz,dim);
	
	vectprincdiag(matriz,dim,vectorpar);
	cout<<"\nEl vector de los elementos de la matriz diagonal es : ";
	imprvector(vectorpar,dim);
	cout<<"\nEl vector con elementos de columnas de indice impar : ";
	vectelemindimpar(matriz,dim,vectorpar);
return 0; 
}

void leerMatriz(int mat[FIL][FIL], int cant)
{	cout << "Ingrese los elementos"<<endl;
   for (int i=0; i < cant; i++) {
        
        for (int j=0; j <cant; j++) 
            cin >> mat[i][j]; 
    }
}
 
void impMat(int mat[FIL][FIL], int cant)
{
    cout << "La matriz es:" << endl;
    for (int i=0; i < cant; i++) {
        cout << endl;
        for (int j=0; j < cant; j++) 
            cout << mat[i][j] << " "; 
    }
    cout << endl;
}

double promdiagsup(int mat[FIL][FIL],int cant)
{
  double b; 
  int c=0;
      for (int i=0;i<cant;i++){
          for (int j=0;j<cant;j++){ 	
              if(i<=j)
              	{c++;
			    b+=mat[i][j];}
									}        
								}
return b/c;}

int cantelempares(int mat[FIL][FIL],int cant)
{
  double b; 
  int c=0;
      for (int i=0;i<cant;i++){
          for (int j=0;j<cant;j++){ 	
              if(i>=j && mat[i][j]%2==0)
              	{c++;}
									}        
								}
return c;}

void vectprincdiag(int mat[FIL][FIL],int cant,int vector[FIL])
{
	for (int i=0; i <cant; i++)     
      vector[i]=mat[i][i];	
}

void imprvector(int vector[FIL],int cant)
{
	for (int i=0; i <cant; i++)
	cout<<vector[i]<<" "; 	
}

void vectelemindimpar(int mat[FIL][FIL],int cant,int vector2[FIL])
{
	for (int i=0;i<cant;i++){
		
          for (int j=0;j<cant;j++){ 	
              if(j%2!=0 )
              	{vector2[j]=mat[i][j];
				  cout<<vector2[j]<<" ";}
									}        
								}
	
}


