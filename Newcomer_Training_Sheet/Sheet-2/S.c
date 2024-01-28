#include <stdio.h>
int main()
{
    int n,i,j,a,b,m,temp,cnt,flag,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(j=b+1;j<a;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}