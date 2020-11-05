/*
    求出从n个不同整数中取出r个整数的组合数
*/

#include <stdio.h>

int combination(int n, int r)
{
    int c;

    if (r == 0 || n == r)
        c = 1;
    else if (r == 1)
        c = n;
    else
        c = combination(n - 1, r - 1) + combination(n - 1, r);

    return c;
}

int main(void)
{
    int n, r;
    printf("请输入个数：");    scanf("%d", &n);
    printf("请输组合数：");    scanf("%d", &r);

    printf("%d的%d组合结果是：%d。\n", n, r, combination(n, r));

    return (0);
}


/*
#include <stdio.h>

int factorial(int n)
{
    if (n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

int combination(int n, int r) {

    if (n > 0)
        return  factorial(n) / (factorial(r) * factorial(n - r));//n的阶乘除以r的和n-r的
    else
        return 1;
}
int main(void) {
    int n;
    int r;
    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);
    printf("%d", combination(n, r));
}
