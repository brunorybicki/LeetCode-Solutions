class Solution {
public:
    string reverseWords(string s) {
        int length = s.size(), start = 0;
        string result = s;

        for (int i = 0; i <= length; i++) {
            if (i == length || s[i] == ' ') {
                int left = start, right = i - 1;

                while (left < right) {
                    char temp = result[left];
                    result[left] = result[right];
                    result[right] = temp;

                    left++;
                    right--;
                }

                start = i + 1;
            }
        }

        return result;
    }
};
