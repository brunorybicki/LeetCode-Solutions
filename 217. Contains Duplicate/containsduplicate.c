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

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compareValues);

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }

    return false;
}
