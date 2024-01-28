#include<stdio.h>
int main()
{
    int i,j,a,n,m,temp,cnt,flag;
    scanf("%d%d",&m,&n);
    int arr[m],ar[n];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&ar[j]);
    }
    cnt=0;
    for(i=0;i<m;i++)
    {
        if(ar[cnt]==arr[i])
        {
            cnt++;
        }//printf("%d %d\n",ar[cnt],arr[i]);
    }
 
    if(cnt==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}