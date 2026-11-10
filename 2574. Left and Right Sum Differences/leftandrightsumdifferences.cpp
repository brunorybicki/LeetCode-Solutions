class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result(nums.size());
        int totalSum = 0, leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i], difference = leftSum - rightSum;

            if (difference < 0) {
                difference = -difference;
            }

            result[i] = difference;
            leftSum += nums[i];
        }

        return result;
    }
};
