#include <iostream>
#include <iomanip>//importante!!!!!
using namespace std;

int main()
{
  float a,b,c;
  
  a=2;
  b=34;
  c=324;
  
  cout<<"la suma de a,b y c expresada en un cuardeno es:\n";
  cout<<setw(3)<<a<<endl;
  cout<<setw(3)<<b<<endl;
  cout<<setw(3)<<c<<endl;
  cout<<"---"<<endl;
  cout<<a+b+c<<endl;
  cout<<endl;
  cout<<"ahora veremos el uso del setprecision combinadamente!!"<<endl;
  a=2.4546;
  b=34.56547;
  c=434.45643;
  
  cout<<setw(3)<<setprecision(3)<<a<<endl;
  cout<<setw(3)<<setprecision(3)<<b<<endl;
  cout<<setw(3)<<setprecision(3)<<c<<endl;
  
  
   
  system("PAUSE");
  return 0;
}   


