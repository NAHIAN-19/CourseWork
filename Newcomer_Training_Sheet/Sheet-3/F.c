#include<stdio.h>
int main()
{
    int arr[1010],a,b,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[0]);
    return 0;
}