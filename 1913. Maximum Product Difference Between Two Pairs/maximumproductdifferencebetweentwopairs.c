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

int maxProductDifference(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compareValues);

    return nums[numsSize - 1] * nums[numsSize - 2] - nums[0] * nums[1];
}
