/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int* result = malloc(sizeof(int) * arrSize), maxRight = -1;

    *returnSize = arrSize;

    for (int i = arrSize - 1; i >= 0; i--) {
        result[i] = maxRight;

        if (arr[i] > maxRight) {
            maxRight = arr[i];
        }
    }

    return result;
}
