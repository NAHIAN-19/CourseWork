#include <stdio.h>
 
int main()
{
    int a,pos=1,arr[1000],n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=arr[1];
    for(i=1;i<n;i++)
    {
        if(arr[i]<a)
        {
             a=arr[i];
             pos=i;
        }
 
 
 
    }
    printf("%d %d",a,pos);
 
 
 
 
    return 0;
}