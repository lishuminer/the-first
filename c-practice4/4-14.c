/*ѭ����ʾ1234567890����ʾ��λ�������������ֵ��ͬ��*/
 
#include <stdio.h>
 
int main(void)
{
    int a, b;
    
    printf("������һ��������");
    scanf("%d",&a);
    
    for(b = 1; b <= a; b++)
        printf("%d",b % 10);
        
    return 0;
}
