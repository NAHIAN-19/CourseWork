#include <stdio.h>
int main()
{
    int a,n,temp,i;
    scanf("%d",&n);
    temp=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=temp)
        {
            temp=a;
        }
    }
    printf("%d\n",temp);
    return 0;
}