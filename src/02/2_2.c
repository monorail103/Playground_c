#include <stdio.h>

int main() {
    int a,b;
    printf("２つの整数を入力してください。\n");
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);

    printf("それらの和は%dで積は%dです。\n", a + b, a * b);
    return 0;
}