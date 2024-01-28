#include <stdio.h>
 
int main() 
{
   long long f[100005];
   int i,n;
   f[1]=0;
   f[2]=1;
   scanf("%d",&n);
   for(i=3;i<=50;i++)
   
      {f[i]=f[i-1]+f[i-2];
       }
   
   printf("%lld\n",f[n]);
    return 0;
}