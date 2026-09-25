class Solution {
    public String toHex(int num) {
        String digits = "0123456789abcdef";
        char[] result = new char[8];

        for (int i = 7; i >= 0; i--) {
            result[i] = digits.charAt(num & 15);
            num >>= 4;
        }

        int start = 0;

        while (result[start] == '0' && start < 7) {
            start++;
        }

        return new String(result, start, 8 - start);
    }
}
