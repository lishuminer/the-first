/*---��ʾ1��n������ֵ�Ķ��η�---*/
 
#include <stdio.h>
 
int main(void)
{
	int n, b;
	
	printf("n��ֵ��");
	scanf("%d",&n);
	
	for(b = 1; b <= n; b++){
		printf("%d�Ķ��η���%d\n",b,b*b);
	}
	
	return 0;
} 
