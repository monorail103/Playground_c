#include <stdio.h>

int main() {
    double a;
    printf("実数を入力せよ: "); scanf("%lf", &a);

    printf("あなたは%fと入力しましたね。", a);
    return 0;
}