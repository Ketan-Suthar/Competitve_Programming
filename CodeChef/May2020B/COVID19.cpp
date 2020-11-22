#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int n)
{
    int minin = INT_MAX ,  maxin = INT_MIN;
    int count = 0;
    for(int i=1; i<n; i++)
    {
        if(abs(arr[i] - arr[i-1]) < 3)
            ++count;
        else
        {
            if(count < minin)
                minin = count;
            count = 0;
        }
    }
    if(count < minin)
        minin = count;
    count = 0;
    for(int i=1; i<n; i++)
    {
        if(abs(arr[i] - arr[i-1]) < 3)
            ++count;
        else
        {
            if(count > maxin)
                maxin = count;
            count = 0;
        }
    }
    if(count > maxin)
        maxin = count;
    cout << minin+1 << " " << maxin+1;
}

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin >> arr[i];
	   fun(arr, n);
	   cout << "\n";
	}
	return 0;
}
