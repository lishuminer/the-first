/*---��4��3�о����3��4�о���ĳ˻���������Ԫ�ص�ֵ�Ӽ������롣---*/
 
#include <stdio.h>
 
#define a 3
#define b 4
 
int main(void)
{
	int la[a][b], lb[b][a], i, j;
	
	printf("������һ��3��4�о����ֵ��\n");
	
	for(i = 0; i < a; i++){
		printf("��%d�У�",i+1);
		for(j = 0; j < b; j++){
			scanf("%d",&la[i][j]);
		}
	}
	
	printf("������һ��4��3�о����ֵ��\n");
	
	for(i = 0; i < b; i++){
		printf("��%d�У�",i+1);
		for(j = 0; j < a; j++){
			scanf("%d",&lb[i][j]);
		}
	}
 
	for(i = 0; i < a; i++){
		printf("��%d�У�",i+1);
		for(j = 0; j < b; j++){
			printf("%d ",la[i][j]*lb[j][i]);
		}
	}
	
	return 0;
} 

