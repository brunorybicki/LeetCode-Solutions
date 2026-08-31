class Solution {
    public boolean isPowerOfFour(int n) {
        long solution = 1;

        while (solution < n) {
            solution *= 4;
        }

        if (solution == n) {
            return true;
        } else {
            return false;
        }
    }
}
