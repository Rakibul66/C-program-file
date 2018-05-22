#include<stdio.h>
void main()
{
    int i,b,count=0,sum=0;
    printf("Input a number:");
    scanf("%d", &i);
    while (i>0)
    {
        b=i%10;
        count++;
        i=i/10;
        sum=sum+b;
    }
    printf("\nThe total digits are %d\n", count);
    printf("\nThe total sum of the digits is %d\n", sum);
}

