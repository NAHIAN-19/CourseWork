#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
    if(a==1)
    {
        printf("-1\n");
    }
    return 0;
}