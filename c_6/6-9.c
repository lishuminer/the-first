/*---创建一个函数，对元素个数为n的int型数组v进行倒序排列。---*/
 
#include <stdio.h>
 
void rev_intary(int v[], int n)
{
	int temp, i;
	
	for(i = 0;i < n/2; i++){
		temp = v[i];
		v[i] = v[n-i-1];
		v[n-i-1] = temp;
	}
	puts("倒序排列了。");
	for(i = 0; i < n; i++)
		printf("v[%d] = %d\n", i, v[i]);
} 
 
int main(void)
{
	int n, v[n], i;
	
	printf("请输入数组的元素个数:");
	scanf("%d",&n);
	
	puts("请输入数组各元素的值。");
	for(i = 0; i < n; i++){
		printf("v[%d]：", i);
		scanf("%d",&v[i]);
	}
	
	rev_intary(v, n);

	return 0;
}
