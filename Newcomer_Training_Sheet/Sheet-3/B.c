#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int  a[100010],n,k,c=0,i;
 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
    if(a[i]==k)
    {
        printf("%d",i);
        break;
    }
    }
    if(a[i]!=k)
    {
        printf("-1");
 
    }
 
 
 
    return 0;
}