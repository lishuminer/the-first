
/*---显示出小于输入的整数的所有2的乘方---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=2;
	
	printf("请输入一个整数：");
	scanf("%d",&a);
	
	while(a > b){
		printf("%d ",b);
		b *= 2;
	} 
	
	return 0;
} 

