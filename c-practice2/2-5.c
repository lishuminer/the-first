/*
	��ȡ����������ֵ��Ȼ����ʾ��ǰ���Ǻ��ߵİٷ�֮�� 
*/

#include <stdio.h>

int main(void)
{
	int x, y;

	puts("����������������");
	printf("����x��");   scanf("%d", &x);
	printf("����y��");   scanf("%d", &y);

	printf("x��ֵ��y�� %f%%\n",  (double)x/y*100);

	return 0;
}
