#include<stdio.h>
int main()
{
    int n,fib1=1,fib=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("0 ");
            continue;
        }
        fib1 = fib1 + fib;
        fib = fib1 - fib;
        printf("%d ", fib);
    }
return 0;
}