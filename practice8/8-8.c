/*---����һ��������ʹ��շת����������������ֵx��y�����Լ����---*/

#include <stdio.h>
/*
int gcd(int x, int y)
{
    int temp;
    temp =  x % y;

    while(temp) {

        x = y;
        y = temp;
        temp = x % y;
    }
	return y;
}
*/


int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);  //�ݹ飺����������
}


int main (void)
{
	int a, b;

    puts("����������������");
	scanf("%d %d", &a, &b);
	printf("%d",gcd(a, b));

	return 0;
}
