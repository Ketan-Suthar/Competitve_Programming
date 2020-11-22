class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int size = nums.size();
        if(size == 1)
            return nums[0];        
        int start = 0, end = size - 1;
        if (nums[end] > nums[0])
            return nums[0];
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid+1])
                return nums[mid+1];
            if(nums[start] > nums[mid])
                end = mid - 1;
            else
            start = mid + 1;
        }
        return -1;
    }
};