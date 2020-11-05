#include<stdio.h>


int put_stringr(const char s[]){
	int i;
	int j=0;
	while(s[j]){
		j++;
	}
	for(i=0;i<j;i++){
		putchar(s[j-i-1]);
	}          //没有改变数组，通过改变输出顺序逆序排列 
}

int main(void)
{
	char ch[128];
    int i;
    printf("请输入字符串: "); 
    scanf("%s", ch);
	put_stringr(ch);
    return 0;
}
