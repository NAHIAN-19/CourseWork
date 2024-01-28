
#include <stdio.h>
int main()
{
    long long int a,n,temp=1,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        for(j=a;j>=1;j--)
            {
                temp*=j;
            }
            printf("%lld\n",temp);
            temp=1;
    }
    return 0;
}