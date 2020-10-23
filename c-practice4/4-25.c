/*
	显示输入整数层的向下的金字塔形状。
*/

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");	scanf("%d",&a);
	
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
