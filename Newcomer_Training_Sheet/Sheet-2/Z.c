#include <stdio.h>
int main()
{
    int k,s,x,y,z,i,j;
    scanf("%d%d",&k,&s);
    x=0;
    for(i=0;i<=k;i++)
    {
        for(j=0;j<=k;j++)
        {
            if(s-i-j>=0&&s-i-j<=k)
            {
                x++;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}