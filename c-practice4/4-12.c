/*---��ȡһ������������ʾ��λ��---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b=0;
	
	printf("������һ����������");
	scanf("%d",&a);
	
	printf("%d��λ����",a);
	while (a > 0) {
		a /= 10;
		b++;
	}
	printf("%d",b); 
	puts("��");
	
	return 0;
}
