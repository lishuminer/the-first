/*---����һ����������Ԫ�ظ���Ϊn��int������v2���е������У���������������
����v1�С�---*/
 
#include <stdio.h>
 
void intary_rcpy (int v1[], const int v2[], int n){
	int temp, i;
	temp = n - 1;
	
	for(i = 0; i < n; i++){
		v1[temp--] = v2[i];
	}
}

int main(void) 
{
	int n, v1[n], v2[n], i;
	
	printf("�����������Ԫ�ظ���:");
	scanf("%d",&n);
	
	puts("������v2�����Ԫ�ص�ֵ��");
	for(i = 0; i < n; i++){
		printf("v2[%d]��", i);
		scanf("%d",&v2[i]);
	}
	
	intary_rcpy(v1,v2,n);
	
	for(i = 0; i < n; i++){
		printf("v1[%d]=%d \n",i, v1[i]);
	}
	
	return 0; 
}

