#include <stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a*2;i=i+2)
    {
        for(j=a*2-3;j>=i;j=j-2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=1;i<=a*2;i=i+2)
    {
        for(j=1;j<i;j=j+2)
        {
            printf(" ");
        }
        for(j=1;j<=a*2-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}