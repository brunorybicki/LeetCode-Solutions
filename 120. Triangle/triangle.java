class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int[] dp = new int[200];

        for (int i = 0; i < triangle.get(triangle.size() - 1).size(); i++) {
            dp[i] = triangle.get(triangle.size() - 1).get(i);
        }

        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                int best;
                
                if (dp[j] < dp[j + 1]) {
                    best = dp[j];
                } else {
                    best = dp[j + 1];
                }

                dp[j] = triangle.get(i).get(j) + best;
            }
        }

        return dp[0];
    }
}
