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
	printf("请输入字符串: ");
    scanf("%s", ch);
    i=str_chnum(ch,i);
	printf("字符串S中字符c的个数为%d",i);
    return 0;
}
