#include <stdio.h>

int main() {
    int height;
    printf("身長を入力せよ: "); scanf("%d", &height);

    double normal = (height - 100) * 0.9;

    printf("標準体重は%5.1fです。", normal);
}