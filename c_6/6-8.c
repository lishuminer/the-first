#include <stdio.h>

int min_of(const int v[], int n)
{
	int min = v[0];
	
	while(n-- > 0){
		if(v[n] < min)
			min = v[n];
	}

	return min;
}

int main(void)
{
	int n, i=0;
	int v[i];
	printf("�����������Ԫ�ظ�����"); scanf("%d", &n);
	puts("�����������Ԫ�أ�"); 
	for(i=0; i<n; i++){
		
		printf("v[%d]��", i);
		scanf("%d", &v[i]);
	}
	
	printf("��Сֵ��%d��", min_of(v, i));  putchar('\n');

	return 0;
}
