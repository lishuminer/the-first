/*
    �����n����ͬ������ȡ��r�������������
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
    printf("�����������");    scanf("%d", &n);
    printf("�����������");    scanf("%d", &r);

    printf("%d��%d��Ͻ���ǣ�%d��\n", n, r, combination(n, r));

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
        return  factorial(n) / (factorial(r) * factorial(n - r));//n�Ľ׳˳���r�ĺ�n-r��
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
