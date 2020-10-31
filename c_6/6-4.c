#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(sqr(x));
}


int main(void)
{
 	int a, b;
 	
 	puts("请输入一个整数。");
	printf("整数a：");	scanf("%d", &a);
	 
	printf("它的四次方是%d。\n", pow4(a)); 
 	
 	return 0;
}
