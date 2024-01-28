#include <stdio.h>
#include<string.h>
int main()
{
    char str[100010],st;
    int i,j,x,t,temp,k,n;
    scanf("%s",str);
    n=strlen(str);
    temp=0;
    for(i=0;i<n;i++)
    {
        if(str[i]==str[n-i-1])
        {
            temp=1;
        }
        else
        {
            temp=0;
            break;
        }
    }
    if(temp==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}