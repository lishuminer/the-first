/*
读取数组中的数据个数和元素值并显示。显示时，
各值之间用逗号和空格分割，并用大括号将所有值括起来（用对象式宏） 
*/
 
#include <stdio.h> 
 
int main (void)
{
	int i, j[i], a;
	
	printf("数据个数:");
	scanf("%d",&i);
	
	for(a = 0; a < i; a++){
		printf("%d号:",a+1);
		scanf("%d",&j[a]);
	} 
	
	putchar('{');
	for(a = 0; a < i - 1; a++){
		printf("%d， ",j[a]);
	}
	printf("%d} ",j[i-1]);
	
	return 0;
} 
