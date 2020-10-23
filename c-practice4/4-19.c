/*
	显示输入的整数值的所有约数后 显示个数 
*/

#include <stdio.h>

int main(void)
{
	int i, n, num = 0;

	printf("整数值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
			num++;
			putchar('\n');
		}
	}
    
	printf ("约数有%d个。",num); 
    putchar('\n');
    
	return 0;
}
