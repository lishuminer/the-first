#include <stdio.h>

int min2 (int a, int b)
{
	int min = a;
	
	if (b < min) min = b;
	return min;
 } 
 
 int main(void)
 {
 	int a, b;
 	
 	puts("����������������");
	 printf("����a��");	scanf("%d", &a);
	 printf("����b��"); scanf("%d", &b);
	 
	 printf("��Сֵ��%d��\n", min2(a, b)); 
 	
 	return 0;
 }
 
