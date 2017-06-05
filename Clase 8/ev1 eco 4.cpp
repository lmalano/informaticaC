#include<iostream>
using namespace std;

int main()
{
int sum=-1;
int i;

for(i=0;i<9;i++)
{
  sum=sum+2;
  if(sum>3)///ojo el if dentro del ciclo for
  sum=0;
}
cout<<sum<<endl;
system("PAUSE");

}                 

