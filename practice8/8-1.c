#include <stdio.h>

#define diff(x, y)  ((x) - (y))

int main(void)
{
    int x;

    int y;

    puts("请输入两个整数：");
    printf("整数1："); scanf("%d", &x);
    printf("整数2："); scanf("%d", &y);

    printf("二值之差为%d。", diff(x, y));

    return 0;
}
