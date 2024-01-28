#include <stdio.h>
int main()
{
    int a,b,c,i,j,temp,t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==1&&b==1&&c==1)
        {
            cnt++;
        }
        else if(a==1&&b==1&&c==0)
        {
            cnt++;
        }
        else if(a==1&&b==0&&c==1)
        {
            cnt++;
        }
        else if(a==0&&b==1&&c==1)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}