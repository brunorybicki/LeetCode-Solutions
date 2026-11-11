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

int arrayPairSum(int* nums, int numsSize) {
    int sum = 0;

    qsort(nums, numsSize, sizeof(int), compareValues);

    for (int i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }

    return sum;
}
