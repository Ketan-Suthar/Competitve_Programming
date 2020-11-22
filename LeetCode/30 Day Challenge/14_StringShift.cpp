class Solution
{
public:
    string stringShift(string s, vector<vector<int>>& shift)
    {
        int left = 0, right = 0;
        int len = s.size();
        for(int i = 0; i < (int)shift.size(); ++i)
        {
            if(shift[i][0])
                right += shift[i][1];
            else
                left += shift[i][1];
        }
        int result = left - right;
         int rem;
        if(result == 0)
            return s;
        string ans = "";
        if(result > 0)
        {
            rem = result % len;
            //cout << result << " " << rem << " " << len;
            ans = s.substr(rem) + s.substr(0, rem);
            return ans;
        }
        result *= -1;
        rem = result % len;
        
        ans = s.substr(len-rem) + s.substr(0, len-rem);
        return ans;
    }
};