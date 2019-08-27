#include<stdio.h>
int main()
{
   int *p;
   char c;
   printf("Enter a character: ");
   scanf("%c",&c);
   p=&c;
   printf("Value of c is: %c",c);
   printf("\nAddress of c is: %d",p);
   printf("\nValue of c is: %c",*p);
   printf("\nAddress of p is: %d",&p);
   return 0;
}
