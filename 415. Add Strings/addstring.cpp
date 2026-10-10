class Solution {
public:
    string addStrings(string num1, string num2) {
        int maxLength = max(num1.size(), num2.size());

        string result(maxLength + 1, '0');
        int carry = 0;

        for (int i = 0; i < maxLength; i++) {
            int sum = carry;

            if (i < num1.size()) {
                sum += num1[(num1.size() - 1) - i] - '0';
            }

            if (i < num2.size()) {
                sum += num2[(num2.size() - 1) - i] - '0';
            }

            result[maxLength - i] = sum % 10 + '0';
            carry = sum / 10;
        }

        result[0] = carry + '0';

        if (carry == 0) {
            return result.substr(1);
        }

        return result;
    }
};
