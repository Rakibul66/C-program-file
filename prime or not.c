#include<stdio.h>
int main()
{
    int n,i,f=0;
    printf("enter positive integer:");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
          f=1;
          break;
      }
    }
    if(f==0)
       printf("prime number");
       else
       printf("Not prime");
       return 0;
}

