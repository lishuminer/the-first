/*
	显示以所输入整数为边长的正方形
*/

#include <stdio.h>
 
int main(void)
{
	int a, b, c;
	
	puts("生成一个正方形");
	printf("正方形有几层：");
	scanf("%d",&a);
	
	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a; c++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
