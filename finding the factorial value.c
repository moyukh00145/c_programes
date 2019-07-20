#include<stdio.h>
void main()//author =Moyukh Sarkar//
{
    int a,b,c=1;
    printf("enter the number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        c=c*b;
    }
     printf("\nfactorial value is=%d",c);
}
