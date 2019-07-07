#include<stdio.h>// author=Moyukh Sarkar//
main()            //objective=to find 1st day of any year//
{

    int a,b,c,d,e,f;
    printf("enter a year");
    scanf("%d",&a);
    b=a-1900;
    {if(b<0)
           c=b%4;
    else
        c=(b-1)%4;}
    {if(c<0)
        d=(b-c)/4;
    else
      d=(b-c)/4;}
    e=(b*365)+d;
    f=e%7;
    if(f==0||f==-7)
       printf(" 1st January is Monday");
    else if(f==1||f==-6)
       printf(" 1st January is Tuesday");
    else if(f==2||f==-5)
       printf(" 1st January is Wednesday");
    else if(f==3||f==-4)
       printf(" 1st January is Thursday");
    else if(f==4||f==-3)
       printf(" 1st January is Friday");
    else if(f==5||f==-2)
       printf(" 1st January is Saturday");
    else if(f==6||f==-1)
       printf("1st January is Sunday");



}
