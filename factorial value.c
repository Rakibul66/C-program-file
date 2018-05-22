

#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter number to calculate its factorial\n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

      fact =fact*i;

       printf("factorial of %d=%d\n",n,fact);
       return 0;
}
