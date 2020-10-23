/*---输入值为负数时不执行换行操作---*/
 
#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个正整数：");
	scanf("%d", &no);
	
	while (no >= 0) {
		printf("%d ", no);
		no--;
	}
	if(no >= 0)
		printf("\n");	
	
	return 0;
} 

