/*
	��ʾ��������������µĽ�������״��
*/

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	puts("����������һ�����µĽ�������");
	printf("�������м��㣺");	scanf("%d",&a);
	
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= b - 1; c++) {
			printf(" ");
		}
		for (c = 1; c <= 2*(a-b)+1; c++) {
			printf("%d",b%10);
		}
		printf("\n");			
	}
	return 0;
}
