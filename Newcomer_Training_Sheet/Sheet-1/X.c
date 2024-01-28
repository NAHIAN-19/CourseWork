#include<stdio.h>
#include<math.h>
int main()
{
double l1,l2,r1,r2,x,y;
scanf("%lf%lf%lf%lf",&l1,&r1,&l2,&r2);
if (l1>=l2)
    x=l1;
else
    x=l2;
if (r1>=r2)
    y=r2;
    else
    y=r1;
if(x>y)
    printf("-1");
else
    printf("%.lf %.lf",x,y);
 
return 0;
}