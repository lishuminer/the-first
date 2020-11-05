#include <stdio.h>
int  factorial(int n)
{
    int a=1, i;
    for(i=1; i<=n; i++) {
        a *= i;
    }

    return a;
}

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d",&num);

    printf("%d的阶乘为%d。\n", num, factorial(num));

    return 0;
}
