/*
	��ʾ������������Ϊ�߳���������
*/

#include <stdio.h>
 
int main(void)
{
	int a, b, c;
	
	puts("����һ��������");
	printf("�������м��㣺");
	scanf("%d",&a);
	
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a; c++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
