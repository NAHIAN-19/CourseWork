#include <stdio.h>
#include<string.h>
int main()
{
    char str[120],st[120];
    int n,i,a;
    scanf("%s\n",str);
    scanf("%s",st);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        if(st[i]>='A'&&st[i]<='Z')
        {
            st[i]=st[i]+32;
        }
    }
    n=strcmp(str,st);
    if(n<0)
    {
        printf("-1\n");
    }
    else if(n>0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
 
    return 0;
}