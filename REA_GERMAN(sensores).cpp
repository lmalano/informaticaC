#include<iostream>
#include<iomanip>
using namespace std;

// Escriba el codigo aqui
const int MAX = 50;
const int N = 5;

int cant[N], med[N][MAX], Max, Min, dim_cant;

void leerVector(int cant[N], int dim_cant);
void cargarMediciones(int cant[N], int med[N][MAX], int dim_cant);
void mostrarMediciones(int cant[N], int med[N][MAX], int dim_cant);
int contarPromedios(int cant[N], int med[N][MAX], int dim_cant);
void detMaxMin (int cant[N], int med[N][MAX], int& Max, int& Min, int dim_cant);

// Programa Principal
int main () 
{
   leerVector(cant, dim_cant);
   cargarMediciones(cant, med, dim_cant);
   mostrarMediciones(cant, med, dim_cant);
   
   cout << "Sensores con promedio mayor a 0:" << contarPromedios(cant, med, dim_cant);
//   cout << "El sensor con el valor maximo es el :" << detMaxMin(cant, med, Max, Min, dim_cant);
//   cout << "El sensor con el valor minimo es el :" << detMaxMin(cant, med, Max, Min, dim_cant);
   
   system("PAUSE");
   return 0;
}

void leerVector(int cant[N], int dim_cant)
{
  for (int i = 0; i < N; i++)   
  {
   do
     {
           
          cout << "\nIngrese cantidad de mediciones del sensor " << i <<",  a mayor a 0 y menor a 50:";
          cin >> dim_cant;
          
          if (0 < dim_cant && dim_cant < MAX)
                    cant[i] = dim_cant;
          else
              cout << "\nLa cantidad ingresada es invalida" << endl;          
          
     }while (0 > dim_cant || dim_cant > MAX); 
   }
         

}   

void cargarMediciones(int cant[N], int med[N][MAX], int dim_cant)
{
     
for(int a = 0; a < MAX; a +=50)
    {
     for(int i = 0; i < N; i++)        
             for(int j = 0; j < cant[a]; j++)
                     {
                      cout << "\nIngrese la medicion " << j << " para el sensor " <<  i  <<": ";
                      cin >> med [i][j];
                                            
                      if (med [i][j] > 50 || med [i][j] < -50)
                      med [i][j] = med [i][j+1];
 
                     }
                     
    }                 

}

void mostrarMediciones(int cant[N], int med[N][MAX], int dim_cant)
{
  cout << "\nLa matriz queda formada por:" << endl;
  for(int a = 0; a < MAX; a +=50)
    {
       for (int i = 0; i < N; i++)
          { 
            for (int j = 0; j < cant[a]; j++)
              {
                   cout << med[i][j] << " ";
              }    
              cout << endl;
           }
    }      
}

int contarPromedios(int cant[N], int med[N][MAX], int dim_cant)
{
    int SumaTotalMed = 0, promedio, contprom = 0;
    for(int a = 0; a < MAX; a +=50)
    {
       for (int i = 0; i < N; i++)
          { 
            for (int j = 0; j < cant[a]; j++)
              {
                   SumaTotalMed += med[i][j];
//                   cout << "SumaTotalMed:" << SumaTotalMed;  
              }    
            promedio = SumaTotalMed / cant [a];
            SumaTotalMed = 0;
                        //       cout << "promedio:" << promedio << " cant[a] " << cant[a] ;
            
            if (promedio > 0)
               contprom += 1;
           }    
    }   

    
return contprom;    
}

void detMaxMin (int cant[N], int med[N][MAX], int& Max, int& Min, int dim_cant)
{
  int tempmax, tempmin;
     
    for(int a = 0; a < MAX; a +=50)
    {
       for (int i = 0; i < N; i++)
          { 
            tempmax = med[i][0];
            for (int j = 1; j < cant[a]; j++)
              {      
                   if (tempmax < med [i][j])
                      tempmax = med[i][j];
                   if (tempmin > med[i][j])
                      tempmin = med [i][j];   
       
              }    
            
           }    
    } 

}
