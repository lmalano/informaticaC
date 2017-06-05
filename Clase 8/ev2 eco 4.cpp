#include<iostream>
using namespace std;

int main()
{
 int a=7;
 int b=8;
 int c=0;
 
 while(a<3*b)
 {
    c=2*(a+b);
    while(b<c)
    {c=c-2;}//si c=10 se ejecuta(b<c) y c toma valor 8    
    a=a+c+1;
    
}

cout<<"a vale"<<a<<endl;
cout<<"c vale"<<c<<endl;
cout<<"b vale"<<b<<endl;

 cout<<a+b+c<<endl;   
   
    
system("PAUSE");
}
                

