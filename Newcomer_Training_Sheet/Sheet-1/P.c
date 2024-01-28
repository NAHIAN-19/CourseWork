#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a>=1000)
    {
        b=(a-(a%1000))/1000;
        if(b%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    else if(a<1000)
    {
        b=(a-(a%100))/100;
        if(b%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    return 0;
}