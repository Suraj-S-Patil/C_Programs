#include<stdio.h>
int main(){
int a;
float b;
double c;
char d;
clrscr();
printf("Size of Integer is: %d Bytes\n",sizeof(a));
printf("Size of Float is: %d Bytes\n",sizeof(b));
printf("Size of Double is: %d Bytes\n",sizeof(c));
printf("Size of Char is: %d Bytes\n",sizeof(d));
getch();
return 0;
}
