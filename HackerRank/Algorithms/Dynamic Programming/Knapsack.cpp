#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the unboundedKnapsack function below.
int unboundedKnapsack(int k, vector<int> arr)
{
    int n = arr.size();
    bool topdown[n+1][k+1];

    for(int i=0; i<=k; i++)
        topdown[0][i] = 0;
    for(int i=0; i<=n; i++)
        topdown[i][0] = 1;
    
    for(int i=1; i<=n; i++)
        for(int j=1; j <= k; j++)
        {
            if(arr[i-1] > j)
                topdown[i][j] = topdown[i-1][j];
            else
                topdown[i][j] = (topdown[i][j - arr[i-1]]) || topdown[i-1][j];
        }
    
    while(topdown[n][k] == 0)
        --k;
    return k;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int sum, n, temp;
        vector<int> arr;
        cin >> n >> sum;
        for(int i=0; i<n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        cout << unboundedKnapsack(sum, arr) << "\n";
    }
}
