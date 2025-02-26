#include <stdio.h>

int main(void) {
    int a;

    printf("整数を入力してください:");
    scanf("%d", &a);

    printf("%dから7を減じると%dです。", a, a - 7);
    
    return 0;
}