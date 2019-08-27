// Q. Write a C program to count no. of digits in an integer.
#include<stdio.h>
#include<conio.h>
void main()
{
   long int rem,count=0,number,num;
   clrscr();
   printf("Enter an integer:---");
   scanf("%ld",&number);
   num=number;
   while(number>0)
   {
	rem=number%10;
	number=(number-rem)/10;
	count++;
   }
   printf("\nThere are %ld digits in the number %ld.",count,num);
   getch();
}
