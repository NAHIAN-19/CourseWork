#include <stdio.h>
void sum (int x)
{
    int arr[100000],i,min,max,s;
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<x;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        
        if(max<arr[i])
        {
            max=arr[i];
        } 
    }
    printf("%d ",min);
    printf("%d",max);  
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}