class Solution {
public:
    bool backspaceCompare(string S, string T)
    {
        int count1=0, count2=0, i = S.length()-1, j=T.length()-1;
        
        while(i >=0 || j>=0)
        {
            while(i >= 0 && (S[i] == '#' || count1 > 0))
            {
                if(S[i--] == '#')
                    ++count1;
                else
                    --count1;
            }
            while(j >= 0 && (T[j] == '#' || count2 > 0))
            {
                if(T[j--] == '#')
                    ++count2;
                else
                    --count2;
            }
            if(i <0 || j <0)
                return i == j;
            
            if(S[i--] != T[j--])
                return false;
        }
        return i == j;
    }
};