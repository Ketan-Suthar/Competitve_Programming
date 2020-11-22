class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix)
    {
        int height = matrix.size();
        if(height == 0)
            return 0;
        int width = matrix[0].size();
        int result[height+1][width+1], ans = 0;
        for(int i=0; i <= height; i++)
            result[i][0] = 0;
        for(int i=0; i <= width; i++)
            result[0][i] = 0;
        
        for(int i=1; i<= height; i++)
            for(int j=1; j<= width; j++)
            {
                if(matrix[i-1][j-1] == '0')
                {
                    result[i][j] = 0;
                    continue;   
                }
                result[i][j] = 1 + min(result[i-1][j], min(result[i][j-1], result[i-1][j-1]));
                
                if(result[i][j] > ans)
                    ans = result[i][j];
            }
        // for(int i=0; i<= height; i++)
        // {
        //     for(int j=0; j<= width; j++)
        //         cout << result[i][j] << " ";
        //     cout << "\n";
        // }
        return ans*ans;
    }
};