// Q. Write a program to display prime numbers between a given interval.
#include<stdio.h>
void main()
{
    int int1,int2,i;
    printf("Enter the first and last interval: ");
    scanf("%d%d",&int1,&int2);
    if(int1<int2)
    {
        for(;int1<int2;int1++)
        {
            for(i=2;i<int1;i++)
            {
                if(int1%i!=0)
                    continue;
                else
                    break;
            }
            if(i==int1)
            printf("%d, ",int1);
        }
    }
    else
    {
        for(;int1>int2;int1--)
        {
            for(i=2;i<int1;i++)
            {
                if(int1%i!=0)
                    continue;
                else
                    break;
            }
            if(i==int1)
                printf("%d, ",int1);
        }
    }
}
