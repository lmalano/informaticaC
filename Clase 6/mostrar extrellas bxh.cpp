#include <iostream>
using namespace std;

int main()
{
int b,h;
cout<<"inserte el largo de base"<<endl;
cin>>b;
cout<<"inserte la altura"<<endl;
cin>>h;

for(int i =0;i<b;i++)
     {
     for(int i=0;i<h;i++)
          {
          cout<<"*";
          }
    cout<<" "<<endl;       
 }
   system("PAUSE");
}
