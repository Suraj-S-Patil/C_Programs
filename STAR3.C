/*
Student Name: Suraj S Patil
Program Name: To print Stars in right angle triangle formation(Reversed).
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=5;j>i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
return 0;
}