#include <stdio.h>

int main() {
    int x, y;
    printf("２つの整数を入力してください。\n");
    printf("整数x: "); scanf("%d", &x);
    printf("整数y: "); scanf("%d", &y);

    printf("xの値はyの%lf%%です。", 100 * (double)x / y );

    return 0;
}