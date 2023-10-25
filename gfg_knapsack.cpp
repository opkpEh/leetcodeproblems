class Solution {
public:
    int knapSack(int N, int W, int val[], int wt[]) {
        vector<int> dp(W + 1, 0);

        for (int i = 0; i <= W; i++) {
            for (int j = 0; j < N; j++) {
                if (wt[j] <= i) {
                    int newValue = dp[i - wt[j]] + val[j];
                    if (newValue > dp[i]) {
                        dp[i] = newValue;
                    }
                }
            }
        }

        return dp[W];
    }
};
