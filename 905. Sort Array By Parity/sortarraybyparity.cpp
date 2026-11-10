class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result(nums.size());
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                result[position] = nums[i];
                position++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                result[position] = nums[i];
                position++;
            }
        }

        return result;
    }
};
