/*
	�������������ʼ������ 1
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("������һ����������");
	scanf("%d", &no);

	while (no > 0) {
		printf("%d ", no--);
	}
    
	if(no >= 0)
		printf("\n");

	return 0;
}
