
/*---升序显示出小于输入值的所有正偶数---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=2;
	 
	printf("请输入一个整数：");
	scanf("%d", &a);
	 
	do{
	 	printf("%d ",b);
	 	b += 2;
	} while (b < a);
	 
	return 0;
}
