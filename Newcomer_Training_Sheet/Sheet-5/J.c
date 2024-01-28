#include <stdio.h>
void sum(int x)
{
    double g,arr[100000],s;
    int i;    
    s=0;
    for(i=0;i<x;i++)
    {
        scanf("%lf",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        s+=arr[i];   
    }
    g=s/x;
    printf("%lf\n",g); 
}
int main()
{
    double n;
    scanf("%lf",&n);
    sum(n);
    return 0;
}