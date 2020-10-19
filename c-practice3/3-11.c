#include  <stdio.h> 

int main(void)
{
	int a , b;
	
	puts("请输入两个整数。"); 
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);
	
	if(a - b <= -11 || a - b >= 11)
		puts("它们的差值大于等于11。");
	else
		puts("它们的差值小于等于10。");
		
	return  0;			 
}
