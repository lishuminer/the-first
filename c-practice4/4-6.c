
/*---������ʾ��С������ֵ��������ż��---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=2;
	 
	printf("������һ��������");
	scanf("%d", &a);
	 
	do{
	 	printf("%d ",b);
	 	b += 2;
	} while (b < a);
	 
	return 0;
}
