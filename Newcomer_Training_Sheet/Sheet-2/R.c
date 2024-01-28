#include <stdio.h>
int main()
{
    int n,i,j,a,b,m,temp,cnt,flag,sum;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m<=0||n<=0)
        {
            break;
        }
        else
        {
            sum=0;
            if(m>n)
            {
                temp=n;
                n=m;
                m=temp;
            }
            for(i=m;i<=n;i++)
            {
                sum+=i;
                printf("%d ",i);
            }
            printf("sum =%d\n",sum);
        }
    }
    return 0;
}