/*
	����һ����������ʾ������������Ľ�������״
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	puts("��������������������");
	printf("�������м��㣺");	scanf("%d",&a);
	
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a - b; c++)
			printf(" ");
		for (c = 1; c <= (2*b - 1); c++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
