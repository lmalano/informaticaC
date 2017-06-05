#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

float **LeerMatriz (int fila,int columna)
{
    float **A=(float**)malloc(fila*sizeof(float*));
    for (int i=0;i<fila;i++)        A[i]=(float*)malloc(columna*sizeof(float));
    cout<<"\n\n\n";
    for (int j=0;j<fila;j++)
    {
        for(int k=0;k<columna;k++)
        {
            cout<<"\t INGRESE ELEMENTO A["<<j+1<<"]["<<k+1<<"] : ";
            cin>>A[j][k];
        }
    }
    cout<<"\n\n\t LA MATRIZ ES : ";
    return A;
}

void mostrarMatriz (float **A,int fila,int columna)
{
    cout<<"\n\n";
    for (int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)            cout<<"\t "<<A[i][j];
    cout<<endl;
    }
    cout<<"\n\n\t ";
}

void Triangular_Sup (float **A,int fila,int columna)
{
      cout<<"\n\n\n\t TRIANGULAR SUPERIOR \n\n";
      for (int i=0;i<fila;i++){
          for (int j=0;j<columna;j++){
              cout<<"\t ";
              if(j>=i)                cout<<A[i][j];
              }
          cout<<endl;
          }
      cout<<"\n\t ";
}

void Triangular_Inf (float **A,int fila,int columna)
{
      cout<<"\n\n\n\t TRIANGULAR INFERIOR \n\n";
      for (int i=0;i<fila;i++){
          for (int j=0;j<columna;j++){
              cout<<"\t ";
              if(i>=j)                cout<<A[i][j];
              }
          cout<<endl;
          }
      cout<<"\n\n\t ";
}

int main ()
{
    int f,c;
    system("color CF");
    cout<<"\n\n\n\t INGRESE DIMENSIONES DE LA MATRIZ : ";
    cout<<"\n\n\t FILAS    : ";
    cin>>f;
    cout<<"\n\t COLUMNAS : ";
    cin>>c;
    float **A=LeerMatriz(f,c);
    mostrarMatriz(A,f,c);
    Triangular_Sup(A,f,c);
    Triangular_Inf(A,f,c);
    system("PAUSE");
    return 0;
}
