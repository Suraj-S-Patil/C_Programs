#include<stdio.h>
#include<conio.h>
int i;
int j;
int array1[3][3];
int array2[3][3];
int array3[3][3];
int menu();
void add();
void sub();
void mul();
void main()
{
   int ch;
   clrscr();
   while(1)
   {    ch=menu();
	switch(ch)
	{
	case 1:add();
		break;
	case 2:sub();
		break;
	case 3:mul();
		break;
	case 4:exit();
		break;
	default:printf("Your choice is invalid! Please select an valid choice.\n");
	}
   }
}
int menu()
{
   int ch;
   printf("\nWelcome: This is Jarvis! \nPlease select an operation:--\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Exit\n");
   scanf("%d",&ch);
   return ch;
}
void add()
{
   printf("Enter first matrix: ");
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		scanf("%d",&array1[i][j]);
	}
   }
   printf("Enter second matrix: ");
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		scanf("%d",&array2[i][j]);
	}
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		array3[i][j]=array1[i][j]+array2[i][j];
	}
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		printf("%d ",array3[i][j]);
	}
	printf("\n");
   }

}
void sub()
{
   printf("Enter first matrix: ");
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		scanf("%d",&array1[i][j]);
	}
   }
   printf("Enter second matrix: ");
   for(i=0;i<=2;i++)
   {
	 for(j=0;j<=2;j++)
	 {
		scanf("%d",&array2[i][j]);
	 }
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		array3[i][j]=array1[i][j]-array2[i][j];
	}
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		printf("%d ",array3[i][j]);
	}
	printf("\n");
   }
}
void mul()
{
   printf("Enter first matrix: ");
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		scanf("%d",&array1[i][j]);
	}
   }
   printf("Enter second matrix: ");
   for(i=0;i<=2;i++)
   {
	 for(j=0;j<=2;j++)
	 {
		scanf("%d",&array2[i][j]);
	 }
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		array3[i][j]=array1[i][j]*array2[i][j];
	}
   }
   for(i=0;i<=2;i++)
   {
	for(j=0;j<=2;j++)
	{
		printf("%d ",array3[i][j]);
	}
	printf("\n");
   }
}