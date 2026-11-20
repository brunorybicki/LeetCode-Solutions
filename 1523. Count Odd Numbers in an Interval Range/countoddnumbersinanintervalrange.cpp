class Solution {
public:
    int countOdds(int low, int high) {
        int oddsUpToHigh = (high + 1) / 2, oddsBelowLow = low / 2;

        return oddsUpToHigh - oddsBelowLow;
    }
};
