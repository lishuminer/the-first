#include<stdio.h>


int put_stringr(const char s[]){
	int i;
	int j=0;
	while(s[j]){
		j++;
	}
	for(i=0;i<j;i++){
		putchar(s[j-i-1]);
	}          //û�иı����飬ͨ���ı����˳���������� 
}

int main(void)
{
	char ch[128];
    int i;
    printf("�������ַ���: "); 
    scanf("%s", ch);
	put_stringr(ch);
    return 0;
}
