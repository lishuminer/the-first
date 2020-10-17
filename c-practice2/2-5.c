/*
	读取两个整数的值，然后显示出前者是后者的百分之几 
*/

#include <stdio.h>

int main(void)
{
	int x, y;

	puts("请输入两个整数。");
	printf("整数x：");   scanf("%d", &x);
	printf("整数y：");   scanf("%d", &y);

	printf("x的值是y的 %f%%\n",  (double)x/y*100);

	return 0;
}
