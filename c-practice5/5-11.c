/*---����6��ѧ��2�ſγ̣����ģ���ѧ���ķ�������ʾ���ſγ̵�
�ֺܷ�ƽ���֣��Լ�����ѧ�����ֺܷ�ƽ���֡�---*/
 
#include <stdio.h>
 
#define stu 6
#define lesson 2 
 
int main (void)
{
	int a, b;
	
	double la[stu][lesson], sum0, sum1 = 0, sum2 = 0;
	//sum0Ϊ��ѧ���ܳɼ���sum1Ϊ�����ܳɼ��� sum2Ϊ��ѧ�ܳɼ��� 
	
	for(a = 0; a < stu; a++){
		sum0 = 0;
		for(b = 0; b < lesson; b++){
			do{
				printf("�������%d��ѧ����%d�ųɼ���",a+1,b+1);
				scanf("%lf",&la[a][b]);
				if (b == 0) 
					sum1+=la[a][b];
				else
					sum2+=la[a][b];
				if(la[a][b] > 100 || la[a][b] < 0){
					printf("���������롣");
				}
			} while (la[a][b] > 100 || la[a][b] < 0);
			
			sum0+=la[a][b];
	}
			printf("��%d��ѧ�����ܷ�Ϊ%f,ƽ����Ϊ%f\n",a+1,sum0,sum0/lesson);
}
 
	printf("���ĳɼ����ܷ�Ϊ%f,ƽ����Ϊ%f,��ѧ�ɼ����ܷ�Ϊ%f,ƽ����Ϊ%f\n",sum1,sum1/stu,sum2,sum2/stu);
	 
	return 0;
}

