#include<stdio.h>

void null_string(char s[]){
	s[0]='\0';
}

int main(void)
{
	char ch[128];
    printf("�������ַ���: ");
    scanf("%s", ch);
    null_string(ch);
    printf("�ַ���Ϊ\"%s\"\n", ch);

    return 0;
}
