/*---����һ������search_idx��������n��Ԫ�ص�����v�е�key��ȵ�����
Ԫ�ص��±�洢������idx�У����غ�key��ȵ�Ԫ�صĸ�����---*/
 
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
	
	printf("��v������%d��Ԫ�أ�\n", NUMBER);
	for(i = 0;i<NUMBER;i++) {
		printf("��%d��Ԫ��Ϊ��",i+1);    scanf("%d",&v[i]);
	}
	printf("��ѡ��key������Ϊ��\n");   scanf("%d",&key);
	
	r = search_idx(v,idx,key,NUMBER);
	printf("��key��ȵ�Ԫ����%d����",r);
	
	int idx[r];
	for (i = 0; i < r; i++) {
		printf("idx[%d] = %d\n",i,idx[i]);
	}
	
	return 0;
}

