class Solution {
public:
    int coinChange(vector<int>& values, int sum)
    {
        int n = values.size();
        int topdown[n+1][sum+1];
        for(int i=0; i<=n; i++)
            topdown[i][0] = 0;
        for(int i=0; i<=sum; i++)
            topdown[0][i] = INT_MAX-1;
        for(int i=1; i<=sum; i++)
        {
            if(i % values[0] == 0)
                topdown[1][i] = i / values[0];
            else
                topdown[1][i] = INT_MAX-1;
        }
        for (int i = 2; i < n+1; ++i)
            for (int j = 1; j < sum+1; ++j)
            {
                if(values[i-1] > j)
                    topdown[i][j] = topdown[i-1][j];
                else
                    topdown[i][j] = min((topdown[i][j - values[i-1]]+1), 
                        topdown[i-1][j]);
            }
        // for (int i = 0; i < n+1; ++i)
        // {
        //     for (int j = 0; j < sum+1; ++j)
        //         cout << topdown[i][j] << " ";
        //     cout << "\n";
        // }
        if(topdown[n][sum] == INT_MAX-1)
            return -1;
        return topdown[n][sum];
    }
};