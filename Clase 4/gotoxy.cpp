 #include <stdio.h>  
 #include <windows.h>  
 #include <conio.h>
 
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int main(){  
      gotoxy(10,10);  
      printf("*");  
      return 0;  
 } 
