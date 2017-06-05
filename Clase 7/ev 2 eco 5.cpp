#include <iostream>
#include <cmath>
using namespace std;
int main()

{
const int DIM=5;

int num[DIM]={3,2,4,4,5};
int posM=0;
int posm=0;
int valM=num[posM];
int valm=num[posm];

                    
 for(int  i=1;i<DIM-1;i++)
{
 if(num[i]>=valM)
 {valM=num[i];
 posM=i;
}
if(num[i]<=valm)
{
valm=num[i];
posm=i;
}
}
cout<<posM<<"-"<<posm<<"."<<abs(valM-valm);

  
system("PAUSE");
return 0;
}

