/*
	�ж�����������ķ���
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no >= 0)
		printf("����ֵ��%d", no);
	else
		printf("����ֵ��%d", -no);

	return 0;
}
