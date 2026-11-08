#include <stdio.h>

// 1. 函式原型宣告 (Function Declarations)
int gcd(int a, int b);
int lcm(int a, int b);

int main(void) {
    int num1, num2;

    printf("請輸入兩個整數 (以空格隔開): ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("%d 和 %d 的最小公倍數 (LCM) 為: %d\n", num1, num2, result);

    return 0;
}

// 2. 副程式實作 (Function Definitions)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}