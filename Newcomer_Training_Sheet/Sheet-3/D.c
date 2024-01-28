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
       if(arr[i]<=10)
       {
           printf("A[%d] = %d\n",i,arr[i]);
       }
 
    }
return 0;
}