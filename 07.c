#include<stdio.h>
void main()
{
    int i,n,factorial=1;
    printf("Enter the value of factorial:");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("\nFactorial valu is %d\n", factorial);
}
