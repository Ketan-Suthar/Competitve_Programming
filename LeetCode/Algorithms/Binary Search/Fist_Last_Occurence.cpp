class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        bool find = 0;
        int start = 0, end = nums.size()-1;
        vector<int> result;
        result.push_back(-1);
        result.push_back(-1);
        int mid;
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                result[0] = mid;
                end = mid - 1;
                find = 1;
                continue;
            }
            if(target > nums[mid])
                start = mid + 1;
            else
                end = mid -1;
        }
        if(find == 0)
            return result;
        start = result[0], end = nums.size()-1;
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                result[1] = mid;
                start = mid + 1;
                continue;
            }
            if(target > nums[mid])
                start = mid + 1;
            else
                end = mid -1;
        }
       
        return result;
    }
};