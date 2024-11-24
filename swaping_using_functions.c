#include<stdio.h>
int swap(int x,int y)
{  int temp;
   temp=x;
   x=y;
   y=temp;
   printf("\nAfter swaping:\nx=%d \ny=%d",x,y);
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
int main()
{ int a=10;
  int b=20;
  printf("Before swaping:\na=%d \nb=%d",a,b);
  swap(a,b);
  
    return 0;
}
