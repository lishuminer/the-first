/*
	��ʾ���������ֵ������Լ���� ��ʾ���� 
*/

#include <stdio.h>

int main(void)
{
	int i, n, num = 0;

	printf("����ֵ��");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
			num++;
			putchar('\n');
		}
	}
    
	printf ("Լ����%d����",num); 
    putchar('\n');
    
	return 0;
}
