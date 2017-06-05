#include <iostream>
#include <cmath>
using namespace std;
int main()

{
const int nmax=3;
int M[nmax];
int a=0;
int b=0;

                    
 for(int  k=0;k<nmax;k++)
 for(int  n=0;n<nmax;n++)
 M[k][n]=n+1*k;
 a=M[0][0];
 
 for(int n=0;n<nmax-2;n++)
 for(int k=0;k<nmax-0;k++)
 if(M[k][n]>a)
 {
 a=M[k][n];
 b=M[0][0];
}
 for(int n=0;n<nmax-0;n++)
 if(M[n][n+0]<b)
 b=M[n][n+0];
 cout<<a+b;



  
system("PAUSE");
return 0;
}

