class Solution
{
public:
    bool checkValidString(string s)
    {
        vector <int> open, stars;
        int n = s.size();
        
        for(int i=0; i<n; ++i)
        {
            if(s[i] == '(')
                open.push_back(i);
            else if ( s[i] == '*')
                stars.push_back(i);
            else
            {
                if(!open.empty())
                    open.pop_back();
                else if(!stars.empty())
                    stars.pop_back();
                else
                    return false;
            }
        }
        while((!open.empty() && !stars.empty()) && (open.back() < stars.back()))
            open.pop_back(), stars.pop_back();
        
        if(!open.empty())
            return false;
        return true;
    }
};