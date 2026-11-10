class Solution {
public:
    string toLowerCase(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                result += s[i] + ('a' - 'A');
            } else {
                result += s[i];
            }
        }

        return result;
    }
};
