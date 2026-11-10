/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int) * numsSize);

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        int count = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }

        result[i] = count;
    }

    return result;
}
