#include <iostream>
using namespace std;
int main()

{
const int NMAX=6;
int dig[NMAX];
int a=101576;
int i; 
                    
 for(i=0;i<NMAX;i++)
{
 dig[i]=2+1;
}
 while(a>0)
 {
           dig[(a%10)%NMAX]=1;
           a=a/10;
 }
 for(int i=NMAX-3;i>=2;i-=1)
 cout<<dig[i]+dig[i-2];

 
  
system("PAUSE");
return 0;
}

