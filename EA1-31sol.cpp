#include<iostream>
using namespace std;

const int N=3;
const int M=3;

void cargarMatriz ( int D[N][M] );
void mostrarMatriz ( int D[N][M] );
void generarVector ( int D[N][M], int S[M] );
int determinarMayor ( int S[M] );
void mostrarColumna ( int D[N][M], int col );


int main () 
{
    int D[N][M];
    int S[M];

    cargarMatriz(D);
    mostrarMatriz(D);
    generarVector(D,S);
    int maxCol = determinarMayor(S);
    cout << "La columna " << maxCol << " es la mayor y sus valores son:" << endl;
    mostrarColumna(D, maxCol);
	system("pause");
    return 0;
}


void cargarMatriz ( int D[N][M] ) {

    for (int i=0; i < N; i++) {
        cout << "Ingrese los valores de la fila " << i << " : ";
        for (int j=0; j < M; j++) 
            cin >> D[i][j]; 
    }
}

void mostrarMatriz ( int D[N][M] ) {

    cout << "La matriz ingresada es:" << endl;
    for (int i=0; i < N; i++) {
        cout << endl;
        for (int j=0; j < M; j++) 
            cout << D[i][j] << " "; 
    }
    cout << endl;
}

void generarVector ( int D[N][M], int S[M] ) {

    for (int j=0; j < M; j++) {
        S[j] = 0;
        for (int i=0; i < N; i++) 
            S[j] += D[i][j]; 
    }
}

int determinarMayor ( int S[M] ) {

    int maxPos = 0;
    int maxVal = S[maxPos];
    for (int j=1; j < M; j++) 
        if ( S[j] > maxVal )
        {
            maxVal = S[j];
            maxPos = j;    
        }
    
    return maxPos;
}


void mostrarColumna ( int D[N][M], int col ) {

    for (int i=0; i < N; i++) 
        cout << D[i][col] << endl;
}


