/*---创建一个函数，使用辗转相除法求出两个整数值x和y的最大公约数。---*/

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
    return b==0?a:gcd(b,a%b);  //递归：除数变余数
}


int main (void)
{
	int a, b;

    puts("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("%d",gcd(a, b));

	return 0;
}
