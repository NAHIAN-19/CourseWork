#include<stdio.h>
int main()
{
    long long int arr[1010][1010];
    int i,j,n,m,temp,cnt;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}