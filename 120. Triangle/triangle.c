int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    int dp[200];

    for (int i = 0; i < triangleColSize[triangleSize - 1]; i++) {
        dp[i] = triangle[triangleSize - 1][i];
    }

    for (int i = triangleSize - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            int best;
            
            if (dp[j] < dp[j + 1]) {
                best = dp[j];
            } else {
                best = dp[j + 1];
            }

            dp[j] = triangle[i][j] + best;
        }
    }

    return dp[0];
}
