class Solution
{
public:
    Solution()
    {
        memset(table, -1, sizeof table);
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.size(), n = text2.size();
        int i, j;  

        for (i = 0; i <= m; i++)  
        {  
            for (j = 0; j <= n; j++)  
            {  
            if (i == 0 || j == 0)  
                table[i][j] = 0;  

            else if (text1[i - 1] == text2[j - 1])  
                table[i][j] = table[i - 1][j - 1] + 1;  

            else
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);  
            }  
        }  
        return table[m][n]; 
    }
private:
    int table[1001][1001];
};
