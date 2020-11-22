int maxProfit(vector<int>& prices)
{
    // for fast io
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n = prices.size();
    
    if(n == 0 || n == 1)
        return 0;
    
    long int profit = 0;
    
    for(int i=1; i < n; ++i)
    {
        if((prices[i]-prices[i-1])>0)
            profit+=prices[i]-prices[i-1];
    }
    return profit;
}
