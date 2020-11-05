#include <stdio.h>
#define num 128
void del_digit( char s[]) {
    int i=0;
    while(s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            s[i++];
        }
        else{
            putchar(s[i]);
            i++;
        }
    }
 }

int main(void) {
    char s[num];
    printf("ÊäÈë×Ö·û´®:");
    scanf("%s", s);

    del_digit(s);

    return 0;
}
