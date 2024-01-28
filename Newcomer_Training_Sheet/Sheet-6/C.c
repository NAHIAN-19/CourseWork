#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int a,b,n,m,x,y,i,j,temp,cnt,sum,odd,even;
    scanf("%lld%lld",&a,&b);
    if(a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    sum=0;
    long long int s=a-1;
    sum=b*(b+1)/2 - s*(s+1)/2;
    even=0;
    long long int even1 = s/2;
    long long int even2 = b/2;
    even = even2*(even2+1) - even1*(even1+1);
    odd=0;
    printf("%lld\n",sum);
    printf("%lld\n",even);
    printf("%lld\n",sum-even);
    return 0;
}