#include <stdio.h>
int main()
{
    int a,i,temp;
    scanf("%d",&a);
    if(a==0||a==1)
    {
        printf("NO\n");
    }
    else if(a==2)
    {
        printf("YES\n");
    }
    else
    {
        temp=0;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                temp=1;
            }
        }
        if(temp==0)
        {
            printf("YES\n");
        }
        else if(temp==1)
        {
            printf("NO\n");
        }
    }
    return 0;
}