#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define ll long long

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,j;
		cin>>n>>k;
		int arr[n*k];
		for(int i=0;i<(n*k);i++) cin>>arr[i];
		int med = ceil((float)n/2.0);
		int waste = n - med;
		ll sum = 0;
		for(int i=n*k-waste, j=k; j>0;j--)
		{
			sum+=arr[i-1];
			i-=waste+1;
		}
		cout<<sum<<'\n';
	}
	return 0;
}