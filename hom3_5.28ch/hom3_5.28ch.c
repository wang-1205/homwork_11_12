#include <stdio.h>

// 1. 函式原型宣告 (Function Declaration)
char changeCase(char ch);

int main(void) {
    char input;

    printf("請輸入一個字元: ");
    scanf(" %c", &input);

    char result = changeCase(input);
    printf("轉換後的結果: %c\n", result);

    return 0;
}

// 2. 副程式實作 (Function Definition)
char changeCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;  // 大寫轉小寫
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 32;  // 小寫轉大寫
    }
    return ch;           // 非英文字母維持原樣
}