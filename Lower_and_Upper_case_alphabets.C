// Q. Write a C program to display characters from A to Z and from a to z using loop.
#include<stdio.h>
#include<conio.h>
void upper(char);
void lower(char);
void main()
{
   char ch1,ch2,choice;
   clrscr();
   printf("Enter your choice:--\n\n1.Upper case alphabets\t2.Lower case alphabets\t3.Exit\n\n");
   scanf("%d",&choice);
   while(1)
   {
	switch(choice)
	{
		case 1:upper(ch1);
		break;
		case 2:lower(ch2);
		break;
		case 3:exit();
	}
   }
   getch();
}
void upper(char ch1)
{
   printf("Uppercase alphabets from 'A' to 'Z' are:--\n\n");
   for(ch1='A';ch1<='Z';ch1++)
   {
	printf("%c\t",ch1);
   }
}
void lower(char ch2)
{
   printf("\n\nLowercase alphabets from 'a' to 'z' are:--\n\n");
   for(ch2='a';ch2<='z';ch2++)
   {
	printf("%c\t",ch2);
   }
}
