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

    printf("������һ��������");
    scanf("%d",&num);

    printf("%d�Ľ׳�Ϊ%d��\n", num, factorial(num));

    return 0;
}
