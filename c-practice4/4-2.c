/*---���������������������֮�����е������ĺ�---*/
 
#include <stdio.h>
 
int main(void)
{
	int a, b, sum=0, min, max;
	
	puts("����������������");
	printf("����a��");	scanf("%d",&a);
	printf("����b��");	scanf("%d",&b); 
	
	(a>b)?(max = a)&&(min = b):(min = a)&&(max = b);
	
	do {
		sum += min;
		min++ ;
	} while(min <= max);
	
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d",min,max,sum);
	
	return 0;
 } 

