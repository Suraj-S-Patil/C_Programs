
#include<stdio.h>
void main()
{
   int *p1,*p2,a,b;
   int add,sub,mul;
   float div;
   printf("Enter two numbers: ");
   scanf("%d%d",&a,&b);
   p1=&a;
   p2=&b;
   printf("Memory address of first no. is: %u\n",p1);
   printf("Memory address of second no. is: %u\n",p2);
   printf("Value at address %u is %d\n",p1,*p1);
   printf("Value at address %u is %d\n",p2,*p2);
   add=*p1+*p2;
   sub=*p1-*p2;
   div=*p1/ *p2;
   mul=*p1**p2;
   printf("Addition of %d and %d is  %d\n",*p1,*p2,add);
   printf("Subtraction of %d and %d is %d\n",*p1,*p2,sub);
   printf("Multiplication of %d and %d is %d\n",*p1,*p2,mul);
   printf("Division of %d and %d is %f\n",*p1,*p2,div);
   printf("!!!!!!! End of execution of program !!!!!!!\n");
}
