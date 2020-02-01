
int hurdleRace(int k, vector<int> height)
{
    int max = INT_MIN;
    for(int i=0;i<height.size(); ++i)
        if(height[i] > max)
            max = height[i];
    if(max>k)
        return max-k;
    return 0;

}