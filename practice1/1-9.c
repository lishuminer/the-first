#include  <stdio.h>

int main(void)
{
	int  n1, n2, n3;
	int  s;
	 
    puts("请输入三个整数。");
    puts("整数1："); scanf("%d", &n1);
    puts("整数2："); scanf("%d", &n2);
    puts("整数3："); scanf("%d", &n3);

    s = n1 + n2 + n3;
	
	printf("它们的和是%d。 \n",s); 

    return 0;
}
