/*---创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有
元素的下标存储在数组idx中，返回和key相等的元素的个数。---*/
 
#include<stdio.h>

#define NUMBER 7
int search_idx(const int v[],int idx[],int key,int n){
	int i, j = 0;
	for(i=0;i<n;i++){
		if(v[i]==key){
			idx[j] = i;
			j++;
		}
	}
	return j;
}
int main(void)
{
	int key, i;
	int v[NUMBER];
	
	printf("向v中输入%d个元素：\n", NUMBER);
	for(i = 0;i<NUMBER;i++) {
		printf("第%d个元素为：",i+1);    scanf("%d",&v[i]);
	}
	printf("请选择key的数字为：\n");   scanf("%d",&key);
	
	r = search_idx(v,idx,key,NUMBER);
	printf("和key相等的元素有%d个。",r);
	
	int idx[r];
	for (i = 0; i < r; i++) {
		printf("idx[%d] = %d\n",i,idx[i]);
	}
	
	return 0;
}

