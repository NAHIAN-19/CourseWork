#include<stdio.h>
int main()
{
  int a,b,d;
  char c,e;
  scanf("%d %c %d %c %d",&a,&c,&b,&e,&d);
  if(c=='+')
  {
      if(a+b==d)
      {
          printf("Yes\n");
      }
      else
      {
          printf("%d\n",a+b);
      }
  }
  else if(c=='-')
  {
      if(a-b==d)
      {
          printf("Yes\n");
      }
      else
      {
          printf("%d\n",a-b);
      }
  }
  else if(c=='*')
  {
      if(a*b==d)
      {
          printf("Yes\n");
      }
      else
      {
          printf("%d\n",a*b);
      }
  }
    return 0;
}