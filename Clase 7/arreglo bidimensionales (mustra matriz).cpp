#include <iostream>
using namespace std;
int main()

{
int  i=10;
int j=10;
int filas;
int columnas;                        
float a[i][j];

cout<<"introduzca el max de filas"<<endl;
cin>>filas;
cout<<"introduzca el max de columnas"<<endl;
cin>>columnas;

if((filas<=i)&&(columnas<=j))
{
cout<<"inserte los "<<filas*columnas<<" elementos"<<endl;                             
 for(i=0;i<filas;i++)
 {
    for(j=0;j<columnas;j++)
    {
       {       
       cin>>a[i][j];
    }            
 }
}


}

else
{
    cout<<"la dimension es invalida"<<endl;
}

for(i=0;i<filas;i++)
 {
    for(j=0;j<columnas;j++)
    {
      cout<<a[i][j];  
    } 
             cout<<" "<<endl; 
 }



system("PAUSE");
return 0;
}

