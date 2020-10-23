/*---求1到n的和，n的值从键盘输入---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, n, sum = 0;
	
	printf("n的值：");
	scanf("%d",&n);
	
	for(a = 1;a <= n;a++){
		sum += a;
	}
	
	printf("1到%d的和为%d。",n,sum);
	
	return 0;
}
