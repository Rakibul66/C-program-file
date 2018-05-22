#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\t", i);
        sum=sum+i;
    }
    printf("sum of 1st 10 number is %d", sum);
}

