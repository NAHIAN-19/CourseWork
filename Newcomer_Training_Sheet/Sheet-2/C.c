#include <stdio.h>
int main()
{
    int N,a,temp,i,e,o,p,n;
    scanf("%d",&N);
    e=o=p=n=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            e++;
        }
        if(a%2!=0)
        {
            o++;
        }
        if(a>0)
        {
            p++;
        }
        if(a<0)
        {
            n++;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}