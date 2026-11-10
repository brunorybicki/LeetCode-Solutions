class Solution {
    public int[] leftRightDifference(int[] nums) {
        int[] result = new int[nums.length];
        int totalSum = 0, leftSum = 0;

        for (int i = 0; i < nums.length; i++) {
            totalSum += nums[i];
        }

        for (int i = 0; i < nums.length; i++) {
            int rightSum = totalSum - leftSum - nums[i], difference = leftSum - rightSum;

            if (difference < 0) {
                difference = -difference;
            }

            result[i] = difference;
            leftSum += nums[i];
        }

        return result;
    }
}
