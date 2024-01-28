#include<stdio.h>
int main()
{
    int count=0;
    int cnt=0;
  char a[1000010]={0};
  scanf("%[^\n]",&a);
  for(int i=0;a[i]!='\0';i++)
  {
      cnt++;
      if(a[i]==' ' || a[i]==',' || a[i]=='?' || a[i]=='!' || a[i]=='.')
      {
 
          if((a[i-1]>='a' && a[i-1]<='z') || (a[i-1]>='A' && a[i-1]<='Z'))
          {
              count++;
          }
         // if(a[i]=='.'&& a[i-1]=='.' && a[i-2]=='.')
         // {
         //     count--;
         // }
      }
 
  }
  if((a[cnt-1]>='a' && a[cnt-1]<='z') || (a[cnt-1]>='A' && a[cnt-1]<='Z'))
  {
      count++;
  }
  printf("%d",count);
}