#include<stdio.h>
int main()
{
    char name[100010];
    char stringA[10]={'h','e','l','l','o','\0'};
    scanf("%s",name);
    int count =0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==stringA[count])
        {
            count++;
        }
    }
if(count==5)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
}