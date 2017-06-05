#include<iostream>
#include<iomanip>
#include<ctime>
#include <stdlib.h>
using namespace std;
int coincidenciafila(int [3][3]);
int coincidenciacol(int mat[3][3]);
int coincidenciadiag(int mat[3][3]);
void mostrar(int [3][3]);
void limpiar(int [3][3]);
void reglas();
void tutorial(int [3][3]);
void recuerda();


int main()
{

    int play[3][3]={0};
    int x=0;
    int y=0;
    int cont=0;
    int f=0;
    char opcion=0;
    reglas();
   srand(time(NULL));
////////////////////////////////CARGA DE FICHAS DE JUGADORES 1Y2////////////////
do{
    do{
        mostrar(play);
        cout<<endl<<endl;
        menu_1:cout<<"INGRESE POSICION JUGADOR 1\n";
        cin>>x>>y;
/******************EVITA QUE EL JUGADOR 1 INGRESE SOBRE CASILLA OCUPADA********/
      if((play[x][y]==2)||(x>2)||(y>2)||(x<0)||(y<0)||(play[x][y]==1))
        {cout<<"Ingrese nuevamente,posicion incorrecta\n\n";
         goto menu_1;}
     else
     {play[x][y]=1;}
     cont++;
     mostrar(play);
     cout<<endl<<endl;
/****DISPARA LA BUSQUEDA DE COINCIDENCIAS POR FILAS,COLUMNAS Y DIAGONALES******/
      f=coincidenciafila(play);
      if(f==1)
      {cout<<setw(10)<<"FELICITACIONES GANADOR JUGADOR 1!!!!\n";
       break;}
      f=coincidenciacol(play);
      if(f==2)
      {cout<<setw(10)<<"FELICITACIONES GANADOR JUGADOR 1!!!!\n";
      break;}
      f=coincidenciadiag(play);
      if(f==3)
      {cout<<setw(10)<<"FELICITACIONES GANADOR JUGADOR 1!!!!\n";
       break;}
      
     if((cont==9)&&(f!=1)&&(f!=2)&&(f!=3)&&(f!=4)&&(f!=5)&&(f!=6))
      {mostrar(play);
      cout<<endl<<"PARTIDO AHOGADO\n";
            break;}
/********************BORRAR SEGUN SE QUIERA************************************/      
      cout<<endl;
      menu:cout<<setw(10)<<"INGRESE POSICION JUGADOR 2\n";
      cin>>x>>y;
      //x=(0+rand()%3);
      //y=(0+rand()%3);
/******************EVITA QUE EL JUGADOR 2 INGRESE SOBRE CASILLA OCUPADA********/      
      if((play[x][y]==1)||(x>2)||(y>2)||(x<0)||(y<0)||(play[x][y]==2))
      {cout<<setw(10)<<"Ingrese nuevamente,posicion incorrecta\n";
       goto menu;}
      
      else{play[x][y]=2;}
      mostrar(play);
      cont++;
/****DISPARA LA BUSQUEDA DE COINCIDENCIAS POR FILAS,COLUMNAS Y DIAGONALES******/
      f=coincidenciafila(play);
      if(f==4)
      {cout<<setw(10)<<"\nFELICITACIONES GANADOR JUGADOR 2!!!!\n";
       break;}
      f=coincidenciacol(play);
      if(f==5)
      {cout<<setw(10)<<"\nFELICITACIONES GANADOR JUGADOR 2!!!!\n";
      break;}
      f=coincidenciadiag(play);
      if(f==6)
      {cout<<setw(10)<<"\nFELICITACIONES GANADOR JUGADOR 2!!!!\n";
       break;}
     
      }while((f!=1)&&(f!=2)&&(f!=3)&&(f!=4)&&(f!=5)&&(f!=6));
      
      cout<<endl;
      cout<<"DESEAN JUGAR NUEVAMENTE?(s/n)\n";
      cin>>opcion;
      limpiar(play);
      cont=0;
      system("cls");
      }while(opcion!='n');
/******************************************************************************/      
     cout<<endl;
     system("pause");
     return 0;
     }
/****************************FIN MAIN******************************************/     

////////////////////////FUNCION QUE BUSCA COINCIDENCIA POR FILA/////////////////
int coincidenciafila(int mat[3][3])
{ 
     int f1=0;
     int f2=0;
     int f3=0;
     for(int m=0;m<3;m++)
      {for(int n=0;n<3;n++)
       {if(mat[m][n]==1)
       {f1++;}
       else if(mat[m][n]==2)
       {f2++;}
       }//cierra segundo for
       if((f1==3)&&(f1!=1))
     {f3=1;}
      else 
      f1=0;
     if((f2==3)&&(f2!=1))
      {f3=4;}
      else
      f2=0;
   }//cierra primer for     
return f3;}
////////////////////////FUNCION QUE BUSCA COINCIDENCIA POR COLUMNAS/////////////
int coincidenciacol(int mat[3][3])
{ 
  int f1=0;
  int f2=0;
  int f3=0;
  for(int m=0;m<3;m++)
    {for(int n=0;n<3;n++)
     {if(mat[n][m]==1)
     {f1++;}
     else if(mat[n][m]==2)
     {f2++;}
  }//cierra segundo for
 if((f1==3)&&(f1!=1))
   {f3=2;}
 else 
 f1=0;
 if((f2==3)&&(f2!=1))
  {f3=5;}
  else
  f2=0;
   }//cierra primer for     
    return f3;}
    
////////////////////////FUNCION QUE BUSCA COINCIDENCIA POR DIAGONALES///////////
int coincidenciadiag(int mat[3][3])
{ 
     int f1=0;
     int f2=0;
     int f3=0;
     int f4=0;
     int f5=0;
    /*Busca coincidencias en diagonal principal*/
    for(int m=0;m<3;m++)
   {if(mat[m][m]==1)
       {f1++;}
       else if(mat[m][m]==2)
       {f2++;}
   }
 /*Busca coincidencias en la contradiagonal*/  
 int cont=2;      
       for(int m=0;m<3;m++)
   {if(mat[m][cont]==1)
       {f3++;}
       else if(mat[m][cont]==2)
       {f4++;}
       cont--;
       }
 /**************************************************/      
 //Verifica las victorias      
  if((f1==3)&&(f1!=1))
     {f5=3;}//Para J1 en diagonal principal
 else if((f2==3)&&(f2!=1))
      {f5=6;}//Para J2 en diagonal principal
  if((f3==3)&&(f3!=1))
     {f5=3;}//Para J1 en contradiagonal
      else if((f4==3)&&(f4!=1))
      {f5=6;}//Para J2 en contradiagonal
return f5;}
////////////////////////////////////////////////////////////////////////////////
void mostrar(int mat[3][3])
{   system("cls");
    recuerda();
    cout<<setw(33)<<"TABLERO DE JUEGO\n";
    for(int i=0;i<3;i++)
    {cout<<setw(20)<<endl;
    for(int j=0;j<3;j++)
     {if(j==2)
      {cout<<mat[i][j];}
      else
      {cout<<mat[i][j]<<" | ";}
   }
     cout<<endl;
     cout<<setw(30)<<"---|---|--- ";}
     }
////////////////////////////////////////////////////////////////////////////////    
void limpiar(int x[3][3])
{  for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
     {x[i][j]=0;}}
}
////////////////////////////////////////////////////////////////////////////////
void reglas()
{
     int h[3][3]={0};
     int a=0,b=0;
     char op=0;
     
     cout<<"|----------------------------------------------------------|\n";
     cout<<"|                        BIENVENIDO...                     |\n";
     cout<<"|   PARA PODER JUGAR,CADA JUGADOR DEBE INGRESAR POR TURNOS |\n";
     cout<<"|      LAS POSICIONES DONDE QUIERE QUE ESTE SU FICHA       |\n";
     cout<<"|       EL TABLERO CON LAS POSICIONES DE JUEGO SE MUESTRA  |\n";   
     cout<<"|                       A CONTINUACION                     |\n";   
     cout<<"| LA FICHA DEL JUGADOR 1 SERA UN 1 Y LA DEL JUGADOR 2 UN 2 |\n";  
     cout<<"|----------------------------------------------------------|\n";
     cout<<endl;
     cout<<setw(40)<<"00 | 01 | 02\n";
     cout<<setw(40)<<"---|----|---\n";
     cout<<setw(40)<<"10 | 11 | 12\n"; 
     cout<<setw(40)<<"---|----|---\n";
     cout<<setw(40)<<"20 | 21 | 22\n";
     cout<<endl;
     cout<<"|-----------------------------------------------------------------|\n";
     cout<<"|  SI SE QUIERE INGRESAR UNA FICHA EN LA CASILLA 11 DEL TABLERO   |\n";
     cout<<"|DEBE INGRESAR EL NUMERO 1 DAR ENTER,NUEVAMENTE 1 Y ENTER OTRA VEZ|\n";
     cout<<"|-----------------------------------------------------------------|\n";
     system("pause");
     system("cls");
    opcion:cout<<"DESEA REALIZAR UNA PRUEBA?(s/n)\n";
     cin>>op;
     if(op=='s')
     {tutorial(h);
     cout<<endl<<endl;
     cout<<"INGRESE EL PRIMER 1 Y PRESIONE ENTER\n";
     cin>>a;
     cout<<"INGRESE EL SEGUNDO 1 Y PRESIONE ENTER\n";
     cin>>b;
     h[a][b]=1;
     tutorial(h);  
     cout<<endl<<endl;
     cout<<"OBSERVE COMO EL VALOR DE LA POSICION CENTRAL(11) HA CAMBIADO\n";
     cout<<"ESO ES TODO...BUENA SUERTE\n";
     cout<<"PRESIONE UNA TECLA PARA COMENZAR EL JUEGO\n\n";}
     else if (op=='n')
      {cout<<"ESO ES TODO...BUENA SUERTE\n";
     cout<<"PRESIONE UNA TECLA PARA COMENZAR EL JUEGO\n\n";}
     else{
          cout<<"OPCION NO VALIDA INGRESE s o n\n";
          goto opcion;}
     system("pause");
     system("cls");     
}
////////////////////////////////////////////////////////////////////////////////
void recuerda()
{
     cout<<"ESTE TABLERO LO GUIA PARA QUE RECUERDE LAS POSICIONES\n\n\n";
     cout<<setw(30)<<"00 | 01 | 02\n";
     cout<<setw(30)<<"---|----|---\n";
     cout<<setw(30)<<"10 | 11 | 12\n"; 
     cout<<setw(30)<<"---|----|---\n";
     cout<<setw(30)<<"20 | 21 | 22\n";
     cout<<endl;
}

void tutorial(int r[3][3])
{  cout<<"ESTE ES EL TABLERO DE JUEGO\n";
   for(int i=0;i<3;i++)
    {cout<<setw(10)<<endl;
    for(int j=0;j<3;j++)
     {if(j==2)
            {cout<<r[i][j];}
     else{
     cout<<r[i][j]<<" | ";}
            }
     cout<<endl;
     cout<<setw(20)<<"---|---|--- ";}
}
