#include <iostream>
#include<stdio.h> 
#include<time.h>
#include <stdlib.h>//importantee

using namespace std;
 
int main(){ 
 
int n=10;

srand(0); 


for(int i=0 ; i<10 ; i++){ 
cout<<"el numero aleatorio " <<i+1<<" es : "<<rand()%100<<endl; //%100 menores a 100
//printf("Numero aleatorio %d es : %d\n",i+1, rand()%100 ); otra forma
} 

 
}
