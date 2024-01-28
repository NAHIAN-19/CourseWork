#include <stdio.h>
int main()
{
    int n,arr[100],i,j,a,temp,cnt,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a=arr[i];
        cnt=temp=0;
        while(a!=0)
        {
            temp=a%10;
            cnt=cnt+temp;
            a/=10;
            printf("%d ",cnt);
            cnt=0;
        }
        if(arr[i]==0)
        {
            printf("%d",a);
        }
        printf("\n");
    }
 
    return 0;
}