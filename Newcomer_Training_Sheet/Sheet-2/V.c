#include <stdio.h>
int main()
{
    int n,i,j,temp=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d ",temp);
            temp++;
            if(temp%4==0)
            {
                temp++;
                printf("PUM\n");
            }
        }
        
    }
    return 0;
}