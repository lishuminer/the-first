/*
	��ʾֱ�������Ϸ��ĵ���ֱ��������
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = len; i > 0; i--) {
		for (j = i; j > 0; j--)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
