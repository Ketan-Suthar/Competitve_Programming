int pickingNumbers(vector<int> a)
{
    int arr[100]{0};
    for(int i=0; i<a.size(); ++i)
        ++arr[a[i]];

    int ans=0;
    for(int i=0; i<a.size()-1; ++i)
        ans = max(ans , arr[i]+arr[i+1]);

    return ans;
}