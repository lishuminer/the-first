/*
	��һ������ϳ��ĳ�����
*/

#include <stdio.h>

int main(void)
{
	int i, j, tmp;
	int height, width;

	puts("����������һ�������Ρ�");
	printf("һ�ߣ�");   scanf("%d", &height);
	printf("��һ�ߣ�");   scanf("%d", &width);
	
	if(height > width){
		tmp = height;
		height = width;
		width = tmp;
	} 

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
