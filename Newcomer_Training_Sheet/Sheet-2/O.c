#include<stdio.h>
int main()
{
    int n,a,temp,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}