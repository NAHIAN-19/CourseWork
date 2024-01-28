#include <stdio.h>
int main()
{
    long long int count,j,r,c,arr[110][110],n,i,a;
    scanf("%lld%lld",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    long long int x;
    scanf("%lld",&x);
    count=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]==x)
            {
                count=1;
            }
        }
    }
    if(count==1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    return 0;
}