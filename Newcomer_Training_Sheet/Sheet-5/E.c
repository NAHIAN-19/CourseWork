#include <stdio.h>
int sum (int a, int b);
int main()
{ 
    int x,y;
    scanf("%d%d",&x,&y);
    sum (x,y);    
    return 0;
}
int sum(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
}