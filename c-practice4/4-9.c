
/*---交替显示+和-，总个数等于所输入的整数值。---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b = 1;
	
	printf("正整数：");
	scanf("%d", &a);
	
	while(a >= b){
		if (b % 2)
			putchar('+');
		else
			putchar('-');
		b++;
	}
	
	return 0;
}
