#include <stdio.h>

int sumup(int n)
{
	int i, sum = 0;
	for(i=1; i<=n; i++){
		sum += i; 
	}
	return sum;
}

int main(void)
{
	int a;
	
	puts("������һ��������");
	printf("����a��");	scanf("%d", &a);
	
	printf("1�������ĺ���%d", sumup(a));
	
	return 0; 
}
