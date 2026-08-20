class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long originalNumber = x;
            long reversedNumber = 0;

            while (x != 0) {
                int digit = x % 10;
                reversedNumber = reversedNumber * 10 + digit;
                x /= 10;
            }

            if (originalNumber == reversedNumber) {
                return true;
            } else {
                return false;
            }
        }
    }
}
