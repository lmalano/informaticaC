#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
    int f,c;
    float val[f][c];
    float subi, subj, mayor,menor,subi2,subj2;
    
    cout<<"inserte la cantidad de filas"<<endl;
    cin>>f;
    cout<<"inserte la cantidad de columnas"<<endl;
    cin>>c;
    
    if(f==1 && c==1)
    {cout<<"matriz invalida"<<endl;
    system("PAUSE");
       return 0; }
    
    cout<<"ingrese los "<<f*c<<" de elementos"<<endl;
    for(int i=0;i<f;i++)
    for(int j=0;j<c;j++)
    cin>>val[i][j];

    cout<<endl;

    for(int i=0;i<f;i++)
    {  
            for(int j=0;j<c;j++)
    {  cout<<val[i][j]<<setw(2);
}
cout<<""<<endl;
}

cout<<endl;
  mayor=val[0][0];

for(int i=0;i<f;i++)
  { for(int j=0;j<c;j++)
  { if(val[i][j]>mayor)
    {
subi=i;
subj=j;
mayor=val[i][j];
     }
}
}

menor=val[0][0];
for(int i=0;i<f;i++)
  { for(int j=0;j<c;j++)
  { if(val[i][j]<menor)
    {
subi2=i;
subj2=j;
menor=val[i][j];
}
}
}

cout<<"El mayor valor del arreglo es :"<<mayor<<" de subindices ["<<subi+1<<"]["<<subj+1<<"]"<<endl;

cout<<"El menor valor del arreglo es :"<<menor<<" de subindices ["<<subi2+1<<"]["<<subj2+1<<"]"<<endl;

system("PAUSE");
return 0;
}


