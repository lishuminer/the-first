/*---读取一个正整数，显示其位数---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=0;
	
	printf("请输入一个正整数：");
	scanf("%d",&a);
	
	printf("%d的位数是",a);
	while (a > 0) {
		a /= 10;
		b++;
	}
	printf("%d",b); 
	puts("。");
	
	return 0;
}
