#include <stdio.h>
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int x,y,a;
    scanf("%d %d",&x,&y);
    a=sum(x,y);
    printf("%d",a);
    return 0;
}