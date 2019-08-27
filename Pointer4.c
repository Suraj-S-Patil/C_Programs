// Name: Suraj Patil
// Topic: Pointer expression
#include<stdio.h>
main()
{
   int *p1,*p2,a,b;
   float x,y;
   printf("Enter two numbers: ");
   scanf("%d%d",&a,&b);
   p1=&a;
   p2=&b;
   printf("Address of %d is: %d\n",a,p1);
   printf("Address of %d is: %d\n",b,p2);
   x=a+*p1-b/ *p2;
   y=b/ *p2-a+*p1;
   printf("The value of (a+*p1-b/ *p2) is: %f\n",x);
   printf("The value of (b/ *p2-a+*p1) is: %f\n",y);
}
