/*---��1��n�ĺͣ�n��ֵ�Ӽ�������---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, n, sum = 0;
	
	printf("n��ֵ��");
	scanf("%d",&n);
	
	for(a = 1;a <= n;a++){
		sum += a;
	}
	
	printf("1��%d�ĺ�Ϊ%d��",n,sum);
	
	return 0;
}
