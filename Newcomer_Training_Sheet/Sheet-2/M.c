
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x, y, next = 0, divide, total = 0;
    bool isLucky = false, stop = true;
    scanf("%d%d",&x,&y);
    for (int i = x; i <= y; i++) {
        divide = i;
        total = i;
        while (divide > 0) {
            next = divide % 10;
            divide /= 10;
            if (next == 7 || next == 4) {
                isLucky = true;
                if (divide == 0) {
                    stop = false;
                    printf("%d ",total);
                }
            }
            else {
                isLucky = false;
                break;
            }
        }
    }
    if (isLucky == false && stop == true) {
        printf("-1\n");
    }
 
    return 0;
}