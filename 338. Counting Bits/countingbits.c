/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* result = malloc(sizeof(int) * (n + 1));

    *returnSize = n + 1;
    result[0] = 0;

    for (int i = 1; i <= n; i++) {
        result[i] = result[i / 2] + i % 2;
    }

    return result;
}
