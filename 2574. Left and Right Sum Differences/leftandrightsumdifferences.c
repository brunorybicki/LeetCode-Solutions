/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(sizeof(int) * numsSize), totalSum = 0, leftSum = 0;

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        int rightSum = totalSum - leftSum - nums[i], difference = leftSum - rightSum;

        if (difference < 0) {
            difference = -difference;
        }

        result[i] = difference;
        leftSum += nums[i];
    }

    return result;
}
