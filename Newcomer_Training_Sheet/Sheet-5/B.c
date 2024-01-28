#include <stdio.h>
void sum(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x==i)
        {
            printf("%d\n",i);
            break;
        }
        printf("%d ",i);
    }  
}
int main()
{
    int k;
    scanf("%d",&k);
    sum(k);
    return 0;
}