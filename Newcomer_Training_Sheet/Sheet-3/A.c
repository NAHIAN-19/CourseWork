#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int a[100010],i,n,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    sum=abs(sum);
    printf("%lld\n",sum);
    return 0;
}