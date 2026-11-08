#include <stdio.h>

// 1. 函式原型宣告 (Function Declaration)
long power(int base, int exponent);

int main(void) {
    int base, exponent;

    printf("請輸入底數 (base) 與指數 (exponent >= 1): ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 1) {
        printf("指數必須大於或等於 1\n");
        return 1;
    }

    long result = power(base, exponent);
    printf("%d 的 %d 次方為: %ld\n", base, exponent, result);

    return 0;
}

// 2. 副程式實作 (Function Definition)
long power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}