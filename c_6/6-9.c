/*---����һ����������Ԫ�ظ���Ϊn��int������v���е������С�---*/
 
#include <stdio.h>
 
void rev_intary(int v[], int n)
{
	int temp, i;
	
	for(i = 0;i < n/2; i++){
		temp = v[i];
		v[i] = v[n-i-1];
		v[n-i-1] = temp;
	}
	puts("���������ˡ�");
	for(i = 0; i < n; i++)
		printf("v[%d] = %d\n", i, v[i]);
} 
 
int main(void)
{
	int n, v[n], i;
	
	printf("�����������Ԫ�ظ���:");
	scanf("%d",&n);
	
	puts("�����������Ԫ�ص�ֵ��");
	for(i = 0; i < n; i++){
		printf("v[%d]��", i);
		scanf("%d",&v[i]);
	}
	
	rev_intary(v, n);

	return 0;
}
