#include<stdio.h>
int main()
{
    long long int i,j,n,sum=0;int arr[1000110];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%1d",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld\n",sum);
    return 0;
}