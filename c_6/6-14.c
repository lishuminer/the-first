/*为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0。*/
 
#include <stdio.h>
 
int main(void)
{
	int a;
	static double i[5];
	
	for (a = 0; a < 5; a++)
		printf("i[%d] = %.1f\n", a, i[a]);
	
	return 0;
 }
