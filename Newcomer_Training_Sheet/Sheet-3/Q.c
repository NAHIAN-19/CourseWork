#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n,x;
 
    int flat=0;
   scanf("%d",&a);
   for(int z=0;z<a;z++)
   {
       int count=0;
        scanf("%d",&n);
    int arr[220]={0};
 
 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    for(int k=0;k<n;k++){
        for(int i=k;i<n;i++)
           {
 
              for(int j=k+1;j<=i;j++)
                {
                    if(arr[j]<arr[j-1])
                    {
                        flat=1;
                    }
                 }
                 if(flat==0)
                 {
                        count++;
                 }
                flat=0;
            }
                             }
 printf("%d\n",count);
}
   }