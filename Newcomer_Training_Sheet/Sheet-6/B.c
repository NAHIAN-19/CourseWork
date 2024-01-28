#include <stdio.h>
#include<math.h>
int main()
{
    long long int n,i,temp;
    scanf("%lld",&n);
    temp=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            temp++;
        }
    }
    if(temp>0||n==1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}