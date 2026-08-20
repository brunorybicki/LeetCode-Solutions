#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i]++;

        if (digits[i] != 10) {
            *returnSize = digitsSize;

            int* result = malloc(digitsSize * sizeof(int));

            for (int j = 0; j < digitsSize; j++) {
                result[j] = digits[j];
            }

            return result;
        }

        digits[i] = 0;
    }

    int* result = malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1;

    for (int j = 1; j <= digitsSize; j++) {
        result[j] = 0;
    }
    
    *returnSize = digitsSize + 1;
    return result;
}
