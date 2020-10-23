/*
	输入一个整数，显示出输入整数层的金字塔形状
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	puts("让我们来画个金字塔。");
	printf("金字塔有几层：");	scanf("%d",&a);
	
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a - b; c++)
			printf(" ");
		for (c = 1; c <= (2*b - 1); c++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
