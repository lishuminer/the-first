#include <stdio.h>
void mat_mul(const int a[4][3],const int b[3][4],int c[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			c[i][j] = b[i][0]*a[0][j] + b[i][1] * a[1][j] + b[i][2] * a[2][j] + b[i][3] * a[3][j];
			printf("%5d",c[i][j]);
		}
		putchar('\n');
	}
	
}
int main(void)
{
	int i, j;
	int a[4][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} ,{10,11,12} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int c[4][4] = { 0 };
	puts("�˻�Ϊ��"); 
	mat_mul(a,b,c);
	
	return 0;
}

