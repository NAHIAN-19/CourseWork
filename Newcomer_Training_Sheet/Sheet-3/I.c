#include <stdio.h>
 
int main()
{
    int i,j,k,l,sum=10000000,arr[110];
    int a,max,s,p,n;
    scanf("%d",&a);
    for(k=1;k<=a;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                
                p=j+1;
                s=i+1;
                max=arr[i]+arr[j]+p-s;
                if(sum>max)
                {
                    sum=max;
                }
                max=0;
            }
        }
        printf("%d\n",sum);
        sum=10000000;
    }
    
 
    return 0;
}