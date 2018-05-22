
#include<stdio.h>
void main()
{
    int i,x,sum=0;
    for(i=1;i<=3;i++)
    {
        printf("Enter number:");
        scanf("%d", &x);
        sum=sum+x;
    }
    printf("sum= %d", sum);
}
