#include <stdio.h>

#define swap(int,a,b) {int temp;temp = a;a = b;b = temp;}
int main(void)
{
    int x, y;

    puts("请输入两个整数：");
	scanf("%d %d", &x, &y);

    swap(int, x, y);
    printf("x = %d\ny = %d\n", x, y);

    return 0;
}
