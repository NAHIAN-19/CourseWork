#include<stdio.h>
int main()
{
    int a,b,c,d,p,q,r,s,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p=a%100;q=b%100;r=c%100;s=d%100;
    x=p*q*r*s;
    y=x%100;
    printf("%.2d\n",y);
    return 0;
}