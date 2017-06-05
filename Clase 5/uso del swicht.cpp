#include <iostream>
using namespace std;

int main()
{
 int c;
 double a,b;

 c=0;//damos el valor a c, que luego utilizara while 

 cout<<"inserte el valor de a"<<endl;
 cin>>a;
 cout<<"inserte el valor de b"<<endl;
 cin>>b;
 
 while(c==0)//c==0 eso hace q cuando se inserte 0 uevla al menu
 {
            
  cout<<"1 ->sumar"<<endl;
  cout<<"2 ->multiplicar"<<endl;
  cout<<"3 ->dividir"<<endl;
  cout<<"0 ->salir"<<endl;
  cin>>c;

  switch(c)
  {
   case 1://para 1 hace lo siguente
         cout<<"la suma es:"<<a+b<<endl;
         break;
   case 2://para 3 hace lo siguente    
       cout<<"la multiplicacion es:"<<a*b<<endl;
       break;  

   case 3: //para 3 hace lo siguente   
       cout<<"la division es:"<<a/b<<endl;
       break;  
   case 0:  //para 6 hace lo siguente osea sale 
       return 0;
       break; 
        
   default:
      cout<<"dije numero ente 0 y 3 !!"<<endl;
           break;  
}
c=0;//este permite q ya elegida la opcion muestre el resultado y no lo saque//
}
 

}
