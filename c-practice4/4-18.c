/*
	��ʾ����������*��ÿ������� 
*/

#include <stdio.h>
 
int main(void)
{
	int a, b;
	
	printf("��ʾ���ٸ�*��");
	scanf("%d",&a);
	
	for(b = 1; b <= a/5; b++)
		puts("*****");
	for(b = 1; b <= a%5; b++)
		printf("*");
	
	return 0;
}
