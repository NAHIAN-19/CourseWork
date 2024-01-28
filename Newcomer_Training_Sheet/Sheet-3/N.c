#include <stdio.h>
#include<strings.h>
 
int main()
{
    int a,b,j;
    int counter=0;
    char arr[20];
    scanf("%d%d",&a,&b);
    scanf(" %[^\n]",&arr);
    int cunt=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        counter++;
        if(arr[i]=='-')
        {
            cunt=counter;
        }
    }
    if(cunt==(a+1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    
    
 
    return 0;
} 