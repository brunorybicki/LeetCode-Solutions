#include <stdlib.h>

char* toHex(int num) {
    char* digits = "0123456789abcdef";
    char* result = malloc(9);

    for (int i = 7; i >= 0; i--) {
        result[i] = digits[num & 15];
        num >>= 4;
    }

    result[8] = '\0';

    int start = 0;

    while (result[start] == '0' && result[start + 1] != '\0') {
        start++;
    }

    return result + start;
}
