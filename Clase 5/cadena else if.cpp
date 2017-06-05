#include <iostream>
#include <cmath>//importante
using namespace std;

int main()
{
  unsigned int a;//sin signo
  cout<<"inserte su nota:"<<endl;
  cin>>a;
 
 if(a<=20)
 cout<<"usted le fue muy mal"<<endl;
 
 else if(a<=40)
 cout<<"usted le fue  mal"<<endl;
    
  else if(a<=59) 
   cout<<"usted no le fue tan mal"<<endl; 
   
   else if(a<=60 )
   
   cout<<"usted le fue muy bien"<<endl; 
   
   else if (a<=80)
   
   cout<<"usted le fue mas que muy bien"<<endl;
   
    else if (a<100)
   
   cout<<"ya casi estamos!!!"<<endl;
   
   else if (a=100)
   cout<<"ohh yes excelente!! !"<<endl;
 
   
   
  system("PAUSE");
  return 0;
}
