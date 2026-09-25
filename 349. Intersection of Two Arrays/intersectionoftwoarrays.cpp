class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> seen(1001, false);
        vector<int> result;

        for (int num : nums1) {
            seen[num] = true;
        }

        for (int num : nums2) {
            if (seen[num]) {
                result.push_back(num);
                seen[num] = false;
            }
        }

        return result;
    }
};
