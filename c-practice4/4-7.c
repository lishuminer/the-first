
/*---��ʾ��С�����������������2�ĳ˷�---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=2;
	
	printf("������һ��������");
	scanf("%d",&a);
	
	while(a > b){
		printf("%d ",b);
		b *= 2;
	} 
	
	return 0;
} 

