#include <stdio.h>
int search_idx(const int v[],int idx[],int key,int n)
{
	int i;
	int j = 0;
	int idx_num;
	for (i = 0; i < n; i++)
	{
		if (v[i] == key)
		{
			idx[j] = i;
			j++;
		}
	}
	return j;
}
int main(void)
{
	int i;
	int num;
	int v[] = {1,7,5,7,2,4,7};
	int key = 7;
	int idx[7] = {0};
	num = search_idx(v,idx,key,7);
	printf("��key��ȵ�Ԫ�صĸ���Ϊ%d��\n",num);
	for (i = 0; i < 7; i++)
	{
		printf("idx[%d] = %d\n",i,idx[i]);
	}
	return 0;
}

