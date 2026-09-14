class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsSize = nums.size(), expectedSum = numsSize * (numsSize + 1) / 2, actualSum = accumulate(nums.begin(), nums.end(), 0);

        return expectedSum - actualSum;
    }
};
