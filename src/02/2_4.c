#include <stdio.h>

int main() {
    int x, y;
    double a, b;

    printf("実数aを入力せよ: "); scanf("%lf", &a);
    printf("実数bを入力せよ: "); scanf("%lf", &b);
    printf("int x: "); scanf("%d", &x);
    printf("int y: "); scanf("%d", &y);

    printf("a / x = %f\n", a / x);
    printf("b * b = %f\n", b * b);
    printf("y * x = %d\n", y * x);
}