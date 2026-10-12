class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;

        for (int i = 0; i < nums.length; i++) {
            int number = nums[i], digits = 0;

            while (number > 0) {
                digits++;
                number /= 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
}
