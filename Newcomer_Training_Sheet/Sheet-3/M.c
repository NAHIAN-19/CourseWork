#include <stdio.h>
 
int main()
{
    int temp,n,arr[100000],b,c,i;
    int min,max,maxcount=0,mincount=0,minindex,maxindex;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    max=arr[0];
    min=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            
            max=arr[i];
            maxindex=i;
            maxcount++;
            
            //printf("%d",arr[i]);
        }
        if(arr[i]<min)
        {
            min=arr[i];
            minindex=i;
            mincount++;
        }
        //printf("%d ",arr[i]);
        
        
    }
    
    if(mincount==0)
    {
        minindex=0;
    }
    if(maxcount==0)
    {
        maxcount=0;
    }
    temp = max;
    arr[maxindex] = min;
    arr[minindex] = temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    
 
    return 0;
}