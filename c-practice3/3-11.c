#include  <stdio.h> 

int main(void)
{
	int a , b;
	
	puts("����������������"); 
	printf("����A��"); scanf("%d", &a);
	printf("����B��"); scanf("%d", &b);
	
	if(a - b <= -11 || a - b >= 11)
		puts("���ǵĲ�ֵ���ڵ���11��");
	else
		puts("���ǵĲ�ֵС�ڵ���10��");
		
	return  0;			 
}
