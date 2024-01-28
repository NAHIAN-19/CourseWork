#include <stdio.h>
int main()
{
    int n,i,j,a,b,c,m,temp,cnt,flag,sum;
    scanf("%d%d%d",&a,&b,&c);
    flag=cnt=temp=0;
    for(i=1;i<=a;i++)
    {
        sum=0;
        temp=i;
        while(temp!=0)
        {
            cnt=temp%10;
            temp=temp/10;
            sum+=cnt;
        }
        if(sum>=b&&sum<=c)
        {
            flag+=i;
        }
    }
    printf("%d\n",flag);
    return 0;
}