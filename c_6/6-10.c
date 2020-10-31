/*---创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在
数组v1中。---*/
 
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
	
	printf("请输入数组的元素个数:");
	scanf("%d",&n);
	
	puts("请输入v2数组各元素的值。");
	for(i = 0; i < n; i++){
		printf("v2[%d]：", i);
		scanf("%d",&v2[i]);
	}
	
	intary_rcpy(v1,v2,n);
	
	for(i = 0; i < n; i++){
		printf("v1[%d]=%d \n",i, v1[i]);
	}
	
	return 0; 
}

