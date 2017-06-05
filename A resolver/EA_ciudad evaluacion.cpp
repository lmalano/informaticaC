#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

void leer_datos(double coordenadas[100][2], int &n_ciudades);
double coordenada_x_de_la_ciudad_mas_al_norte(double coordenadas[100][2], int n_ciudades);
double distancia_de_ciudades_mas_cercanas(double coordenadas[100][2], int n_ciudades);
void buscar_ciudades_centrales(double coordenadas[100][2],int n_ciudades,double ciudades_centrales[3][2]);
void guardar_resultados(double ciudades_centrales[3][2],int &n_ciudades);

int main ()
{
    double coordenadas[100][2], ciudades_centrales[3][2], distancia, coordenada_x;
    int n_ciudades;

leer_datos(coordenadas, n_ciudades);
coordenada_x=coordenada_x_de_la_ciudad_mas_al_norte(coordenadas, n_ciudades);//"y" mas grande
distancia = distancia_de_ciudades_mas_cercanas(coordenadas, n_ciudades);

cout<<"\n\n";
cout<< "La coordenada X de la ciudad mas al norte es:"<<coordenada_x<<endl;
cout<<"Las ciudades mas cercanas se encuentran a una distancia de:"<<distancia<<endl;

buscar_ciudades_centrales(coordenadas, n_ciudades, ciudades_centrales);
guardar_resultados(ciudades_centrales,n_ciudades);

system("PAUSE");
return 0;
}

void leer_datos(double coordenadas[100][2], int &n_ciudades)
{
     cout<<"\n Cargar el numero de ciudades:";
     do
     {cin>>n_ciudades;
      }while(n_ciudades<=0||n_ciudades>100);

     for(int k=0; k<n_ciudades; k++)
     {       cout<<"\n Coordenadas x de la ciudad "<<k+1<<":";
             cin>>coordenadas[k][0];
              cout<<"\n Coordenadas y de la ciudad "<<k+1<<":";
             cin>>coordenadas[k][1];
             }
}

double coordenada_x_de_la_ciudad_mas_al_norte(double coordenadas[100][2], int n_ciudades)
{
    double ymax= coordenadas[0][1], xdeymax= coordenadas[0][0];

    for (int n=0; n<n_ciudades; n++)
    for(int k=1; k<n_ciudades; k++)
          if (ymax<coordenadas[k][1])
               {  ymax=coordenadas[k][1];
                  xdeymax=coordenadas[k][0];
               }
return xdeymax;
}

double distancia_de_ciudades_mas_cercanas(double coordenadas[100][2], int n_ciudades)
{
       double minimadistancia, dist;

       for(int k=0; k<n_ciudades; k++)
         for(int j=k+1; j<n_ciudades; j++)//Empieza en k+1 porque sino se compararia consigo misma cada ciudad y seria distancia 0
         {
                 dist= sqrt(pow(coordenadas[k][0]-coordenadas[j][0],2)+ pow(coordenadas[k][1]-coordenadas[j][1],2));

                 if ((minimadistancia>dist)||(k==0&&j==1))
                    minimadistancia=dist;
         }
return minimadistancia;
}

void buscar_ciudades_centrales(double coordenadas[100][2],int n_ciudades,double ciudades_centrales[3][2])
{
     double cx=0, cy=0, dist[100][3];

     for(int k=0; k<n_ciudades; k++)//sumando coordenadas en x e y
     {
             cx+=coordenadas[k][0];
             cy+=coordenadas[k][1];
     }

     cx= cx/n_ciudades;
     cy= cy/n_ciudades;

     for(int k=0; k<n_ciudades; k++)
     {
             dist[k][0]=coordenadas[k][0];
             dist[k][1]=coordenadas[k][1];
             dist[k][2]=sqrt(pow(coordenadas[k][0]-cx,2)+pow(coordenadas[k][1]-cy,2));
     }

     for(int n=0;n<n_ciudades-1;n++)//ORDENO LAS CIUDADES
      for(int k=0; k<n_ciudades-1-n; k++)
       if(dist[k][2]>dist[k+1][2])
        {
          double aux;//auxiliar
          for(int i=0; i<n_ciudades; i++)
            {
            aux=dist[k][i];
            dist[k][i]=dist[k+1][i];
            dist[k+1][i]=aux;
            }
        }

    for(int k=0; k<n_ciudades;k++)
    {
     ciudades_centrales[k][0]=dist[k][0];
     ciudades_centrales[k][1]=dist[k][1];
    }

}

void guardar_resultados(double ciudades_centrales[3][2],int &n_ciudades)
{
     cout<<"Las ciudades mas cercanas al centro del pais son:"<<endl;

  for(int k=0; k<n_ciudades;k++)
     {
     cout<<"Ciudad "<<k+1<<", de coordenadas:"<<endl;
     cout<<"X="<<ciudades_centrales[k][0]<<"   Y:"<<ciudades_centrales[k][1]<<endl;
     }

}
