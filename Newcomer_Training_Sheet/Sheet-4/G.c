#include<stdio.h>
#include<string.h>
#include<strings.h>
#include <ctype.h>
int main()
{
    char a[100010];
   scanf("%[^\n]",&a);
    int total_length=strlen(a);
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==',')
        {
            a[i]=' ';
        }
        int k=a[i];
 
        if(k>=65 && k<=90 )
        {
 
           a[i]=tolower(a[i]);
        }
        else
        {
            a[i]=toupper(a[i]);
        }
 
        i++;
    }
    printf("%s",a);
 
}