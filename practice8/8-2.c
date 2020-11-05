#include <stdio.h>

#define max(x, y) (((x) > (y))? (x):(y))

int main(void)
{
    int a, b, c, d;

    puts("请输入四个整数：");
    printf("整数1："); scanf("%d", &a);
    printf("整数2："); scanf("%d", &b);
    printf("整数3："); scanf("%d", &c);
    printf("整数4："); scanf("%d", &d);


    printf("法一：a,b,c,d中的最大值是%d。\n", max(max(a,b),max(c,d)));

    printf("法二：a,b,c,d中的最大值是%d。", max(max(max(a,b),c), d));

    return 0;
}
