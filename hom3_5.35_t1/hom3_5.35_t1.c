#include <stdio.h>

// 1. 函式原型宣告 (Function Declaration)
unsigned long long int fibonacci(unsigned int n);

int main(void) {
    unsigned int n;

    printf("請輸入要計算的項數 n: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));

    return 0;
}

// 2. 副程式實作 (Function Definition)
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int fib0 = 0;
    unsigned long long int fib1 = 1;
    unsigned long long int fibN = 0;

    for (unsigned int i = 2; i <= n; i++) {
        fibN = fib0 + fib1;
        fib0 = fib1;
        fib1 = fibN;
    }

    return fibN;
}