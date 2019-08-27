// Q. Write a program to calculate power of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
   int base,pow,tot=1,i;
   clrscr();
   printf("Enter Base and its Power:--\n");
   scanf("%d%d",&base,&pow);
   if(pow==0)
	printf("Result is: 1.");
   else
   {
	for(i=1;i<=pow;i++)
	{
		tot=tot*base;
	}
	printf("Result is: %d",tot);
   }
   getch();
}
