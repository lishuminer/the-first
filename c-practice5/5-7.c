/*
��ȡ�����е����ݸ�����Ԫ��ֵ����ʾ����ʾʱ��
��ֵ֮���ö��źͿո�ָ���ô����Ž�����ֵ���������ö���ʽ�꣩ 
*/
 
#include <stdio.h> 
 
int main (void)
{
	int i, j[i], a;
	
	printf("���ݸ���:");
	scanf("%d",&i);
	
	for(a = 0; a < i; a++){
		printf("%d��:",a+1);
		scanf("%d",&j[a]);
	} 
	
	putchar('{');
	for(a = 0; a < i - 1; a++){
		printf("%d�� ",j[a]);
	}
	printf("%d} ",j[i-1]);
	
	return 0;
} 
