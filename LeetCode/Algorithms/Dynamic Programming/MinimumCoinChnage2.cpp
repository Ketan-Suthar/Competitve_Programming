class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
        int coinsSize = coins.size();
        int dp[amount+1];
        int INF = 10000000;
        for(int i=0; i<=amount; i++)
            dp[i]=INF;
        dp[0]=0;
        for (int i = 1; i <= amount; ++i)
        {
            int ans = INF;
            for (int j = 0; j < coinsSize; ++j)
            {
                if(coins[j]<=i)
                    ans =  min(ans, dp[i - coins[j]]);
            }
            if(ans == INF)
                dp[i]=INF;
            else
                dp[i]=ans+1;
        }
        if(dp[amount] == INF)
                return -1;
        return dp[amount];    
    }
};