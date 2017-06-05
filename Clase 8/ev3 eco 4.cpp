#include<iostream>
using namespace std;

int main()
{
 int a=7;
 int b=4;

 while(a<=4*b)
 {
   if((a+b)%2==0)
    for(int d=a; d<3*b; d+=a+3) 
        a=a+d; 
         {
          a=a+3;
         }
 }  
cout<<a+b<<endl;   
    
system("PAUSE");
}           
