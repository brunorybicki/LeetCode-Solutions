class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> seen(1001, 0), result;

        for (int num : nums1) {
            seen[num]++;
        }

        for (int num : nums2) {
            if (seen[num] > 0) {
                result.push_back(num);
                seen[num]--;
            }
        }

        return result;
    }
};
