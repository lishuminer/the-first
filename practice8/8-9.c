/*
    �����׼�������г��ֵ�����
*/

#include <stdio.h>

int main(void)
{
    int ch;
    int n = 0;

    while ((ch = getchar()) != EOF) {
        putchar(ch);

        if (ch == '\n')    n++;
    }

    printf("һ��������%d�С�\n", n);
    return 0;
}
