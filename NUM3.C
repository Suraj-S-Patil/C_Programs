/*
Student Name: Suraj S Patil
Program Name: To print numbers in the following pattern:
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=5;j>=i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	}
	printf("\n");
}
getch();
return 0;
}