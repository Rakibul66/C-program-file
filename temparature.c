#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temp in centigrade:");
    scanf("%f",&c);
    f=(9*c)/5+32;
    /*or we use f=(1.8*c)+32*/
    printf("tempareture in a farenheight:%f",f);
    return 0;
}


