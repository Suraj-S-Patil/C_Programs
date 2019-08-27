#include<stdio.h>
int main()
{
   int *p,a;
   printf("Enter a number: ");
   scanf("%d",&a);
   p=&a;
   printf("Value of a is: %d",a);
   printf("\nAddress of a is : %d",p);
   printf("\nValue of a is: %d",*p);
   printf("\nAddress of a is: %d",&a);
   printf("\nAddress of p is: %d",&p);
   printf("\nAddress of a in hexadecimal no. system is: %p",p);
   printf("\nAddress of p in hexadecimal no. system is: %p",&p);
   return 0;
}
