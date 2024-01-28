#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000010];
    long long int i,x,temp;
    scanf("%s",str);
    x=strlen(str);
    temp=0;
    for(i=0;i<x;i++)
    {
        temp+=str[i]-'0';
    }
    printf("%lld\n",temp);
    return 0;
}