#include<iostream>
#include <iomanip>
using namespace std;

const int N=50;
const int M=50;

void cargarMatriz ( int D[N][M] ,int f ,int c);
void mostrarMatriz ( int D[N][M],int f,int c);
void generarVector ( int D[N][M], int S[M],int f,int c );
int determinarMayor ( int S[M] ,int c);
void mostrarColumna ( int D[N][M], int col,int f );


int main () 
{	int col,fil;
    int D[N][M];
    int S[M];
    
    cout<<"ingrese la cant de columnas"<<endl;
    cin>>col;
    cout<<"ingrese la cant de filas"<<endl;
    cin>>fil; 
      

    cargarMatriz(D,col,fil);
    mostrarMatriz(D,col,fil);
    generarVector(D,S,col,fil);
    int maxCol = determinarMayor(S,col);
    cout << "La columna " << maxCol << " es la mayor y sus valores son:" << endl;
    mostrarColumna(D, maxCol,fil);
	system("pause");
    return 0;
}


void cargarMatriz ( int D[N][M],int f,int c) {

    for (int i=0; i < f; i++) {
        for (int j=0; j < c; j++) 
            cin >> D[i][j]; }
}

void mostrarMatriz ( int D[N][M],int f,int c  ) {

    cout << "La matriz ingresada es:" << endl;
    for (int i=0; i < f; i++) {
        cout << endl;
        for (int j=0; j < c; j++) 
            cout <<setw(2) D[i][j] << " "; 
    }
    cout << endl;
}

void generarVector ( int D[N][M], int S[M],int c,int f) {

    for (int j=0; j < c; j++) {
        S[j] = 0;
        for (int i=0; i < f; i++) 
            S[j] += D[i][j]; 
    }
}

int determinarMayor ( int S[M] ,int c) {

    int maxPos = 0;
    int maxVal = S[maxPos];
    for (int j=1; j < c; j++) 
        if ( S[j] > maxVal )
        {
            maxVal = S[j];
            maxPos = j;    
        }
    
    return maxPos;
}


void mostrarColumna ( int D[N][M], int col,int f ) {

    for (int i=0; i < f; i++) 
        cout << D[i][col] << endl;
}


