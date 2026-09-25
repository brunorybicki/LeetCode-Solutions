class Solution {
public:
    string toHex(int num) {
        string digits = "0123456789abcdef", result = "00000000";

        for (int i = 7; i >= 0; i--) {
            result[i] = digits[num & 15];
            num >>= 4;
        }

        int start = 0;

        while (result[start] == '0' && start < 7) {
            start++;
        }

        return result.substr(start);
    }
};
