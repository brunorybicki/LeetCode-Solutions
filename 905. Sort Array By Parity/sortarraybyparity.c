/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int) * numsSize), position = 0;

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[position] = nums[i];
            position++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 != 0) {
            result[position] = nums[i];
            position++;
        }
    }

    return result;
}
