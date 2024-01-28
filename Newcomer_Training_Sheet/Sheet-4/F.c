#include<stdio.h>
#include<string.h>
 
int main()
{
    int sum=0,x,i,n;
    char a[1000000];
    scanf("%s",a);
    x=strlen(a);
    for(i=0;i<x;i++)
    {
        n=a[i]-'0';
        sum+=n;
    }
    printf("%d",sum);
    
    return 0;
}