
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x,y;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    x=b*log(a);
    y=d*log(c);
    if(x>y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}