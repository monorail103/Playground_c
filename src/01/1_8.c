#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("２つの整数を入力してください。\n");
    printf("整数n1:"); scanf("%d", &n1);
    printf("整数n2:"); scanf("%d", &n2);

    int w = n1 * n2;

    printf("それらの積は%dです。", w);
    return 0;
}