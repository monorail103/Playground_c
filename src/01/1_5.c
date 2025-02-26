#include <stdio.h>

int main(void) {
    int a;

    printf("整数を入力してください:");
    // &をつける
    scanf("%d", &a);

    printf("%dに13を加えると%dです。", a, a + 13);

    return 0;
}