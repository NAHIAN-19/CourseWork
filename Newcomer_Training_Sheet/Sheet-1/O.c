#include<stdio.h>
#include<math.h>
int main()
{
    char x;
    double a,b,c;
    scanf("%lf%c%lf",&a,&x,&b);
    if(x=='+')
    {
        printf("%.0lf\n",a+b);
    }
    else if(x=='-')
    {
        printf("%.0lf\n",a-b);
    }
    else if(x=='*')
    {
        printf("%.0lf\n",a*b);
    }
    else if(x=='/')
    {
        printf("%.0lf\n",floor(a/b));
    }
    return 0;
}