#include<stdio.h>

int str_char(const char s[],int c){
	int i,len;
	while(s[len]){
		len++;
	}
	for(i=0;i<len;i++){
		if(s[i]=='c'){
			c=i;
			break;
		}	
	}
	if(s[i]=='\0'){
		c= -1;
	}
	return c;
}

int main(void)
{
	char ch[128];
    int i;
	printf("请输入字符串: ");
    scanf("%s", ch);
    i=str_char(ch,'c');
	printf("字符c的下标值为%d",i);
    return 0;
}
