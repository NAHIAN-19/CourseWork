#include<stdio.h>
int main()
{
    double b;
    scanf("%lf",&b);
    int a= b;
    if(a-b==0)
    {
        printf("int %d\n",a);
    }
    else
    {
        printf("float %d %.3lf\n",a,b-a);
    }
    return 0;
}