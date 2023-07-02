
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>


void main ()
{
   clrscr();
   short int a,b;
   unsigned short int high_mul, low_mul;
   short int quotient, remainder;
   long x;

   cout<<"Input First Number:";
   cin>>a;
   cout<<endl<<"Input Second Number:";
   cin>>b;

   asm {
      mov ax,a
      mov bx,b

      imul bx

      mov low_mul,ax
      mov high_mul,dx

      mov ax,a
      mov bx,b
      cwd
      idiv bx
      mov quotient, ax
      mov remainder, dx
   }

  //asm  mov x,dx
  // x<<=16;
   //x+=low_mul;

   cout<<"\zarb="<<low_mul<<endl;
   cout<<"div="<< quotient <<endl;
   cout<<"mod ="<< remainder <<endl;
   getch();
}


