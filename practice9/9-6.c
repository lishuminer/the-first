#include<stdio.h>
 
int str_chnum(const char s[], int c)
{
	int i=0;
	while (s[i] != '\0'){
		if(s[i]=='c')
			c++;
		i++;
	}
	return c;
}

int main(void)
{
	char ch[128];
    int i;
	printf("�������ַ���: ");
    scanf("%s", ch);
    i=str_chnum(ch,i);
	printf("�ַ���S���ַ�c�ĸ���Ϊ%d",i);
    return 0;
}
