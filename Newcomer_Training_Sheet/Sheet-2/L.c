#include <stdio.h>
int main()
{
    int a,b,i,temp,cnt,n;
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        n=a;
    }
    else
    {
        n=b;
    }
    cnt=temp=0;
    for(i=1;i<=n;i++)
    {
        if(a%i==0&&b%i==0)
        {
            cnt=i;
            if(temp<=cnt)
            {
                temp=cnt;
            }
        }
    }
    printf("%d\n",temp);
    return 0;
}