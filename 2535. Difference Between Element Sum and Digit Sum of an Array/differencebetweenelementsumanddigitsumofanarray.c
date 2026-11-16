int differenceOfSum(int* nums, int numsSize) {
    int elementSum = 0, digitSum = 0;

    for (int i = 0; i < numsSize; i++) {
        int number = nums[i];

        elementSum += nums[i];

        while (number > 0) {
            digitSum += number % 10;
            number /= 10;
        }
    }

    return elementSum - digitSum;
}
