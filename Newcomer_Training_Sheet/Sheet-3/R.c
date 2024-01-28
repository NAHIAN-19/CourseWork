#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10010],ar[10010],i,j,n,a[10010],b[10010],cnt;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j] <arr[i])
            {
                cnt = arr[i];
                arr[i] = arr[j];
                arr[j] = cnt;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[j] <ar[i])
            {
                cnt = ar[i];
                ar[i] = ar[j];
                ar[j] = cnt;
            }
        }
    }
    cnt=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==ar[i])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}