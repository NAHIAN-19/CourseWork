#include<stdio.h>
int main()
{
    int n,a,temp,i,j;
    char ch;
    scanf("%c\n%d",&ch,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}