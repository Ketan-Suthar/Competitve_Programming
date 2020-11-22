
void moveZeroes(vector<int>& nums)
{
    int nonZero=0, size = nums.size();
    if(size == 0 || size == 1)
        return;
    int i=0;
    while(i < size)
    {
        if(nums[i] != 0)
        {
            ++i;
            continue;
        }
        
        for(nonZero = i; nonZero < size && nums[nonZero]==0; ++nonZero);
        
        if(nonZero == size)
            break;
        nums[i] ^= nums[nonZero] ^= nums[i] ^= nums[nonZero];
        ++i;
    }
}
