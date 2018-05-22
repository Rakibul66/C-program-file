#include<stdio.h>
void main()
{
    int i,n,min,max,flag;
    printf("Enter interval numbers:");
    scanf("%d%d", &min,&max);
    for(n=min;n<=max;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
                break;
        }
        if(flag==0)
        {
            printf("%d\t",n);
        }

    }

}
