class Solution {
    public boolean isPowerOfTwo(int n) {
        long solution = 1;

        while (solution < n) {
            solution *= 2;
        }

        if (solution == n) {
            return true;
        } else {
            return false;
        }
    }
}
