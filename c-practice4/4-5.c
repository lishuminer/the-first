/*
	������ʾ��1�������������Ϊֹ�ĸ�������
*/

#include <stdio.h>

int main(void)
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	i = 1;
	while (i <= no) {
		printf("%d ", i++);	
	}
	
	if (no >= 0)
		printf("\n");			

	return 0;
}
