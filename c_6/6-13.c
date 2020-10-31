#include <stdio.h>

void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{ 
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void mat_print(const int m[4][3])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%6d", m[i][j]);
		}
		printf("\n");
	}
		putchar('\n');
}
int main(void)
{
	int tensu[2][4][3] = { { { 91, 63, 78 },{ 67, 72, 46 },{ 89, 34, 53 },{ 32, 54, 34 } } ,
						   { { 97, 67, 82 },{ 73, 43, 46 },{ 97, 56, 21 },{ 85, 46, 35 } } };
	int sum[4][3];			/* �ܷ� */
	mat_add(tensu[0], tensu[1], sum);				/* �����ο����гɼ����ܺ� */
	puts("��һ�ο��Եķ���");  mat_print(tensu[0]);	/* ��ʾ��һ�ο��Եķ��� */
	puts("�ڶ��ο��Եķ���");  mat_print(tensu[1]);	/* ��ʾ�ڶ��ο��Եķ��� */
	puts("�ܷ�");        mat_print(sum);		/* ��ʾ�ܷ� */
	return 0;
}

