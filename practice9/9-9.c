#include<stdio.h>

#define num 128

void rev_string(char s[]) {
    int i;
    int g = 0;
    while(s[g]){
		g++;
	}
    for (i = 0; i < (g/2); i++) {
        int tem = s[i];
        s[i] = s[g - i - 1];
        s[g - i - 1] =tem;

    }
    int j = 0;
    while (s[j]){
        putchar(s[j++]);
    }
}
int main(void) {

    char x[num];
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s", x);
    rev_string(x);

    return 0;
}
