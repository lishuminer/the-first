#include <stdio.h>

#define max(x, y) (((x) > (y))? (x):(y))

int main(void)
{
    int a, b, c, d;

    puts("�������ĸ�������");
    printf("����1��"); scanf("%d", &a);
    printf("����2��"); scanf("%d", &b);
    printf("����3��"); scanf("%d", &c);
    printf("����4��"); scanf("%d", &d);


    printf("��һ��a,b,c,d�е����ֵ��%d��\n", max(max(a,b),max(c,d)));

    printf("������a,b,c,d�е����ֵ��%d��", max(max(max(a,b),c), d));

    return 0;
}
