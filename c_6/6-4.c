#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(sqr(x));
}


int main(void)
{
 	int a, b;
 	
 	puts("������һ��������");
	printf("����a��");	scanf("%d", &a);
	 
	printf("�����Ĵη���%d��\n", pow4(a)); 
 	
 	return 0;
}
