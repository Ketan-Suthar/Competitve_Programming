int sockMerchant(int n, vector<int> ar)
{
    int arr[101];
    for(int i=0;i<101;++i)
        arr[i]=1;
    int count=0;
    for(int i=0; i<n; ++i)
        ++arr[ar[i]];
    
    for(int i=0; i<101; ++i)
    {
        cout<<" "<<arr[i];
        if(arr[i]>2)
            count += (arr[i]-1)/2;
    }
    return count;
}