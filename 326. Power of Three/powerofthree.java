class Solution {
    public boolean isPowerOfThree(int n) {
        long solution = 1;

        while (solution < n) {
            solution *= 3;
        }

        if (solution == n) {
            return true;
        } else {
            return false;
        }
    }
}
