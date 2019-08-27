/*
Student Name: Suraj S Patil
Program Name: To print numbers in the folowing pattern:
12345
1234
123
12
1
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
clrscr();
for(i=5;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
getch();
return 0;
}