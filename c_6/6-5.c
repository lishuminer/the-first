#include <stdio.h>

int sumup(int n)
{
	int i, sum = 0;
	for(i=1; i<=n; i++){
		sum += i; 
	}
	return sum;
}

int main(void)
{
	int a;
	
	puts("请输入一个整数。");
	printf("整数a：");	scanf("%d", &a);
	
	printf("1到整数的和是%d", sumup(a));
	
	return 0; 
}
