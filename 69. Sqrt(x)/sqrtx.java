class Solution {
    public int mySqrt(int x) {
        if (x < 2) {
            return x;
        }

        long result = 1;

        while (result * result <= x) {
            result++;
        }

        return (int)(result - 1);
    }
}
