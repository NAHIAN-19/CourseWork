#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int  arr[100010],n,k,i;
 
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("2 ");
        }
        if(arr[i]>0)
        {
            printf("1 ");
        }
        if(arr[i]==0)
        {
            printf("0 ");
        }
    }
    return 0;
}