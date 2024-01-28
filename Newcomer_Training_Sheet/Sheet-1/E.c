
#include<stdio.h>
#define pi 3.141592653
int main()
{
    double R,area;
    scanf("%lf",&R);
    area=pi*R*R;
    printf("%.9lf\n",area);
    return 0;
}