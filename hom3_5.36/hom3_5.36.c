#include <stdio.h>

// 1. 函式原型宣告 (Function Declaration)
void hanoi(int n, int source, int dest, int temp);

int main(void) {
    int disks;

    printf("請輸入盤子數量: ");
    scanf("%d", &disks);

    printf("移動步驟如下 (從 柱子 1 移至 柱子 3):\n");
    hanoi(disks, 1, 3, 2);

    return 0;
}

// 2. 副程式實作 (Function Definition)
void hanoi(int n, int source, int dest, int temp) {
    if (n == 1) {
        printf("%d -> %d\n", source, dest);
        return;
    }

    hanoi(n - 1, source, temp, dest);
    printf("%d -> %d\n", source, dest);
    hanoi(n - 1, temp, dest, source);
}