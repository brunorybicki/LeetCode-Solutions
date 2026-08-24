class Solution {
    public int singleNumber(int[] nums) {
            for (int i = 0; i < nums.length; i++) {
            boolean found = false;
            
            for (int j = 0; j < nums.length; j++) {
                if (i != j && nums[i] == nums[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return nums[i];
            }
        }

        return 0;
    }
}
