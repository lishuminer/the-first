/*---��ʾ��߷�Χ�ͼ�������������ֵ���п��ơ�---*/
 
#include <stdio.h>
 
int main(void)
{
	int st, en, j, height;
	double weight;
	
	printf("��ʼ��ֵ��cm��:");
	scanf("%d",&st);
	
	printf("������ֵ��cm��:");
	scanf("%d",&en);
	
	printf("�����ֵ��cm��:");
	scanf("%d",&j);
	
	for (height = st; height <= en; height+=j) {
		weight = (height - 80) * 0.9;
		printf("%dcm   %.2fkg\n",height,weight);
	}
	
	 return 0;
}
