#include <stdio.h>

int cube(int x)
{
	return x*x*x;	
}

int main(void)
{
 	int a, b;
 	
 	puts("������һ��������");
	 printf("����a��");	scanf("%d", &a);
	 
	 printf("����������%d��\n", cube(a)); 
 	
 	return 0;
}
