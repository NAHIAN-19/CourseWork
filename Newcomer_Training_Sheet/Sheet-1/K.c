#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b<c)
    {
            printf("%d %d\n",a,c);
    }
    else if(a<b&&b>c)
    {
        if(c>a)
        {
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("%d %d\n",c,b);
        }
    }
    else if(a>b&&b<c)
    {
        if(a>c)
        {
            printf("%d %d\n",b,a);
        }
        else
        {
            printf("%d %d\n",b,c);
        }
    }
    else if(a>b&&a>c)
    {
        if(b>c)
        {
        printf("%d %d\n",c,a);
        }
        else
        {
            printf("%d %d\n",b,a);
        }
    }
    else if(a==b&&b>c)
    {
        printf("%d %d\n",c,a);
    }
    else if(a==b&&b<c)
    {
        printf("%d %d\n",b,c);
    }
    else if(a==b&&b==c&&a==c)
    {
        printf("%d %d\n",a,b);
    }
    else if(a>b&&b==c)
    {
        printf("%d %d\n",b,a);
    }
    else if(a==c&&a<b)
    {
        printf("%d %d\n",a,b);
    }
    else if(a<b&&b==c)
    {
        printf("%d %d\n",a,c);
    }
    else if(a==c&&a>b)
    {
        printf("%d %d\n",b,c);
    }
    return 0;
}