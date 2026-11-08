#include <stdio.h>
#include <ctype.h>

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
    if (isupper(ch)) {
        return tolower(ch);
    } else if (islower(ch)) {
        return toupper(ch);
    }
    return ch; // 若輸入非英文字母，則維持原樣傳回
}