#include<stdio.h>
int main()
{
    int n,i,j,f=0,x=0;
    long int arr[300];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld", &arr[i]);
    }
 
    for(i=1; i<=n; i++)
    {
        f=0;
        while(arr[i]%2==0)
        {
            f++;
            arr[i]/=2;
        }
        if(i==1 || f<x)
        {
            x = f;
        }
    }
    printf("%ld\n", x);
    return 0;
}