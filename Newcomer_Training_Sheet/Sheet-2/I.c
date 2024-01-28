#include <stdio.h>
int main()
{
    int n, cnt = 0, temp, flag;
    scanf("%d", &n);
    flag = n;
    while(n != 0)
    {
        temp = n % 10;
        cnt = cnt * 10 + temp;
        n /= 10;
    }
    if(flag == cnt)
    {
        printf("%d\nYES\n",cnt);
    }
    else
    {
        printf("%d\nNO\n",cnt);
    }
    return 0;
}