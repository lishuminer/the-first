/*
	�ж�����������ķ���
*/

#include <stdio.h>

int main(void)
{
	int no;
	int retry;
	
    do{
    	printf("������һ��������");
	    scanf("%d", &no);

	    if (no == 0)
			puts("������Ϊ0��");
	    else if (no > 0)
			puts("������Ϊ������");
	    else
			puts("������Ϊ������");
		
		printf("�Ƿ������<yes-0/no-9>:");
		scanf("%d", &retry);
	} while (retry == 0);
	
	return 0;
}
