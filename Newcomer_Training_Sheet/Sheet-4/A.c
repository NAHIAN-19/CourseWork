
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1010],ar[1010];
    int a,b,i,j,cnt,cnt1;
    gets(arr);
    gets(ar);
    cnt=strlen(arr);
    cnt1=strlen(ar);
    printf("%d %d\n",cnt,cnt1);
    printf("%s %s\n",arr,ar);
    return 0;
}