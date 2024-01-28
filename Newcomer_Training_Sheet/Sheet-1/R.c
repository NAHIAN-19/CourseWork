
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%365;
    e=a/365;
    c=b/30;
    d=(b%30)/1;
    printf("%d years\n%d months\n%d days\n",e,c,d);
    return 0;
}