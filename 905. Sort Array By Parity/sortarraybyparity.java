class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int[] result = new int[nums.length];
        int position = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 == 0) {
                result[position] = nums[i];
                position++;
            }
        }

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 2 != 0) {
                result[position] = nums[i];
                position++;
            }
        }

        return result;
    }
}
