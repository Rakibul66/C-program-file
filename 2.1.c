#include <stdio.h>
int main ()
{
    int i,j,s=0,p=6;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=s;j++)
        {
            printf (" ");
        }
        for (j=1;j<=1;j++)
        {
            printf ("*");
            printf (" ");
        }
        printf ("\n");
        s=s+2;
    }
    for (i=4;i>=1;i--)
    {
        for (j=1;j<=p;j++)
        {
            printf (" ");
        }
        for (j=1;j<=1;j++)
        {
            printf ("*");
            printf (" ");
        }
        printf ("\n");
        p=p-2;
    }
    return 0;
}
