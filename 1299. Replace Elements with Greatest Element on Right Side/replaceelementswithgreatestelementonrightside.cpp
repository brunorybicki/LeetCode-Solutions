class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result(arr.size());
        int maxRight = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            result[i] = maxRight;

            if (arr[i] > maxRight) {
                maxRight = arr[i];
            }
        }

        return result;
    }
};
