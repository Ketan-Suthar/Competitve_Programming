class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int findMaxLength(vector<int>& nums)
    {
        int maxSize = 0, count = 0, size = nums.size(), count0 = 0;
        
        for(const auto n: nums)
            if(!n) ++count0;

        vector<int> m(size + 1, -2); // Use -2 to mean uninitialized
        
        m[count0] = -1;
        for(int i = 0; i < size; ++i) {
            count += nums[i] == 0 ? -1 : 1;
            const int d = count0 + count;
            if(m[d] != -2) {
                maxSize = max(maxSize, i - m[d]);
            }
            else m[d] = i; 
        }
        return maxSize;
    }
};