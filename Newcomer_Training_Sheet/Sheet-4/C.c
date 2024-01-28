#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],st[100];
    int temp;
    scanf("%s %s",str,st);
    temp=strcmp(str,st);
    if(temp<0)
    {
        printf("%s\n",str);
    }
    else if(temp>=0)
    {
        printf("%s\n",st);
    }
    //printf("%s\n",str);
    return 0;
}