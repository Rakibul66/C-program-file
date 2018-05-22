
#include<stdio.h>
int main()
{
    int r,i,j,k;
    printf("enter the range you want to multiply:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=10;j++)

            printf("%d*%d=%d\n",i,j,i*j);
            printf("\n");
        }

   return 0;
}
