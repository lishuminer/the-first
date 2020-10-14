#include  <stdio.h>

int main(void)
{
	int  n1, n2;
	int  m;
	 
    puts("请输入两个整数。");
    puts("整数1："); scanf("%d", &n1);
    puts("整数2："); scanf("%d", &n2);
    
    m = n1 * n2;
	
	printf("它们的乘积是%d。 \n",m); 

    return 0;
}
