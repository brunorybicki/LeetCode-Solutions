class Solution {
    public String addStrings(String num1, String num2) {
        int maxLength = Math.max(num1.length(), num2.length());

        char[] result = new char[maxLength + 1];
        int carry = 0;

        for (int i = 0; i < maxLength; i++) {
            int sum = carry;

            if (i < num1.length()) {
                sum += Character.getNumericValue(num1.charAt((num1.length() - 1) - i));
            }

            if (i < num2.length()) {
                sum += Character.getNumericValue(num2.charAt((num2.length() - 1) - i));
            }

            result[maxLength - i] = Character.forDigit(sum % 10, 10);
            carry = sum / 10;
        }

        result[0] = Character.forDigit(carry, 10);

        if (carry == 0) {
            return new String(result, 1, maxLength);
        }

        return new String(result);
    }
}
