
#include<stdio.h>

#define NUMBER 3

void rev_string(char s[][128], int n)
{
    int i, j,len;
    
               
        
    for (i = 0; i < n; i++){
        len = 0;
		while (s[i][len]){               
        	len++;
    	}
    	printf("s[%d] = ",i);
        for(j=0;j<len;j++){
        	
			putchar(s[i][len-j-1]);
		}
		putchar('\n');
    }
}

int main(void)
{
    int i;
    char str[NUMBER][128];
    printf("������%d���ַ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("s[%d] = ", i);
        scanf("%s", str[i]);
    }
    printf("����Ϊ�����任����ַ�����\n");
    rev_string(str, NUMBER);
    
    
    
    return 0;
}

/*
#include<stdio.h>

#define NUMBER 3

void rev_string(char s[][128], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++){
        j = 0;
        while (s[i][j]){               
            j++;
        }
        for (k = 0; k < j / 2; k++){    ����������ˣ�����һ�ַ���ֻ�Ǹı������˳�� 
        	int temp;
            temp = s[i][k];
            s[i][k] = s[i][j - k - 1];
            s[i][j - k - 1] = temp;
        }
    }
}

int main(void)
{
    int i;
    char str[NUMBER][128];
    printf("������%d���ַ�����\n", NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("s[%d] = ", i);
        scanf("%s", str[i]);
    }
    printf("����Ϊ�����任����ַ�����\n");
    rev_string(str, NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }
    return 0;
}
*/
