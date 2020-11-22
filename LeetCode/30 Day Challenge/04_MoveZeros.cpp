class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int n1 = nums.size();
        vector <int>::iterator pos; 
        pos = remove (nums.begin(), nums.end() , 0); 
        for(auto i = pos; i != nums.end(); ++i)
            *i = 0;
    }
};