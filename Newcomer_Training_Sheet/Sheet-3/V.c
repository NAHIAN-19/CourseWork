
#include<stdio.h>
int main()
{
    int a,b,n,cnt;
    scanf("%d%d",&a,&b);
    int num[200000];
    int kum[200000];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<a;i++)
    {
       kum[num[i]]++;
    }
    for(int i=1;i<=b;i++)
    {
        printf("%d\n",kum[i]);
    }
 return 0;
}