#include <stdio.h>
void rec(int x,char y)
{
    if(x==0)
    {
        return ;       
    }
    else
    {
        printf("%c ",y);
        rec(x-1,y);
    }  
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char q;
        int s;
        scanf("%d\n%c",&s,&q);  
        rec(s,q);
        printf("\n");
    }
    return 0;
}