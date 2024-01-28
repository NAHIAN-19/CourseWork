#include <stdio.h>
#include<string.h>
int main()
{
    char str[100010],st;
    int i,j,x,t,temp,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        temp=0;
        x=strlen(str);
        for(i=0,j=1,k=2;i<x,j<x,k<x;i++,j++,k++)
        {
            if((str[i]=='0'&&str[j]=='1'&&str[k]=='0')||(str[i]=='1'&&str[j]=='0'&&str[k]=='1'))
            {
               temp=1;
            }
        }
        if(temp==1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}