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
	printf("请输入数组的元素个数："); scanf("%d", &n);
	puts("请输入数组的元素："); 
	for(i=0; i<n; i++){
		
		printf("v[%d]：", i);
		scanf("%d", &v[i]);
	}
	
	printf("最小值是%d。", min_of(v, i));  putchar('\n');

	return 0;
}
