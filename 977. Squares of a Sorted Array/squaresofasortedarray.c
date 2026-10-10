int compareValues(const void *a, const void *b) {
    const int *valueA = a;
    const int *valueB = b;

    if (*valueA > *valueB) {
        return 1;
    } else if (*valueA < *valueB) {
        return -1;
    } else {
        return 0;
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int) * numsSize);

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }

    qsort(result, numsSize, sizeof(int), compareValues);

    return result;
}
