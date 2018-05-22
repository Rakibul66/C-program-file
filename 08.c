#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d", &a,&b);
    c=pow(a,b);
    printf("Power value is %d", c);
}
