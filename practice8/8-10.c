/*
	计算标准输入流中出现的数字字符数（第2版）
*/

#include <stdio.h>

int main(void)
{
	int i, j, ch;
	int cnt[10] = {0};		/* 数字字符的出现次数 */

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}

	puts("数字字符的出现次数");
	for (i = 0; i < 10; i++) {
        printf("'%d'：", i);

        for(j=0; j<cnt[i]; j++){
            putchar('*');
        }

        putchar('\n');
	}


	return 0;
}
