#include<stdio.h>
#include<strings.h>
int main()
{
    int n;
    int big,small;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
    char a[60]={0};
    char b[60]={0};
    char total[120];
    scanf("%s",a);
    int c=strlen(a);//big
    scanf("%s",b);
    int d=strlen(b);//small
   if(c>d)
   {
       big=c;
       small=d;
   }
   else
   {
       big=d;
       small=c;
   }
   for(int i=0;i<big;i++)
   {
      if(a[i]>0)
      {
           printf("%c",a[i]);
      }
       if(b[i]>0)
       {
           printf("%c",b[i]);
       }
   }
   printf("\n");
}
}