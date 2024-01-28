#include<stdio.h>
int main()
{
    char name[10010];
    scanf("%s",name);
    int index,count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]=='E' && name[i+1]=='G' && name[i+2]=='Y' && name[i+3]=='P' && name[i+4]=='T')
        {
            name[i]='?';
            name[i+1]=' ';
            name[i+2]=' ';
            name[i+3]=' ';
            name[i+4]=' ';
        }
    }
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]!=' ')
        {
       if(name[i]=='?')
       {
          printf(" ");
 
       }
       else
       {
            printf("%c",name[i]);
       }
        }
    }
    //printf("%d",count);
 }
