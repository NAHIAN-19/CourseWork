#include<stdio.h>
int main()
{
    int arr[100010],i,j,n,temp,cnt;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=0;
    cnt=arr[0];
    for(i=0;i<n;i++)
    {
        if(cnt>arr[i])
        {
            cnt=arr[i];
        }
    }
    //printf("%d ",cnt);
    for(i=0;i<n;i++)
    {
        if(cnt==arr[i])
        {
            temp++;
        }
    }
    if(temp%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    return 0;
}