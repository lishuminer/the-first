/*
	��ʾ��������·������ļ���
*/

#include <stdio.h>

int main(void)
{
	int month;					/* �� */

	printf("�������·ݣ�");
	scanf("%d", &month);
    
    switch (month) {
    	case 3:
		case 4:
		case 5:
			printf("%d���Ǵ�����\n", month); break;
		case 6:
		case 7:
		case 8:
			printf("%d�����ļ���\n", month); break;
		case 9:
		case 10:
		case 11:
			printf("%d�����＾��\n", month); break;
		case 12:
		case 1:
		case 2:
			printf("%d���Ƕ�����\n", month); break;
		default :
			printf("%d�²�����!!\a\n", month);
	}

	return 0;
}
