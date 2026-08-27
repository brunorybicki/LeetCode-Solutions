#include <stdbool.h>

bool isValid(char* s) {
    int top = -1;
    char stack[10001];

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                return false;
            }

            char last = stack[top--];

            if (c == ')' && last != '(') {
                return false;
            } else if (c == '}' && last != '{') {
                return false;
            } else if (c == ']' && last != '[') {
                return false;
            }
        }
    }

    return top == -1;
}
