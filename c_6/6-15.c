/*---��ʾ�����õĴ�������ʾ���ǵ���3�κ���put_count�����н����---*/
 
#include <stdio.h> 
 
void put_count(){
	static int a;
	
	a++;
	
	printf("put_coubt:��%d��\n",a);
}
 
int main(void)
{
	int a;
	
	for(a = 0; a < 3; a++)
		put_count();
	
	return 0;
}

