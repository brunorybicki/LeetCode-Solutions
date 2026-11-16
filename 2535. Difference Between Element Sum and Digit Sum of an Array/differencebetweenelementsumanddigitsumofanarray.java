class Solution {
    public int differenceOfSum(int[] nums) {
        int elementSum = 0, digitSum = 0;

        for (int i = 0; i < nums.length; i++) {
            int number = nums[i];

            elementSum += nums[i];

            while (number > 0) {
                digitSum += number % 10;
                number /= 10;
            }
        }

        return elementSum - digitSum;
    }
}
