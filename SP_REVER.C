// Q. Write a program to reverse a number.
#include<stdio.h>
#include<conio.h>
void main()
{
   long int number,rev[100],rem,count=0,i=0,j,revnum=0,place=1;
   clrscr();
   printf("Enter an integer to be reversed: \n");
   scanf("%ld",&number);
   while(number>0)
   {
	count++;
	rem=number%10;
	number=(number-rem)/10;
	while(i<=count)
	{
		rev[i]=rem;
		i++;
	}
   }
   for(j=count;j>0;j--)
   {
	revnum=revnum+rev[j]*place;
	place*=10;
   }
   printf("Reversed number of %ld is: %ld",number,revnum);
   getch();
}