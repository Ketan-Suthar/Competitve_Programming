#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define N 1000000
int n,k;
string s;
int dp[N][3];

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;
		int pre[n];
		memset(pre, 0, sizeof pre);
		for (int i = 0; i < n; ++i)
		{
			if(i==0)
				pre[i] = s[i] - '0';
			else
				pre[i] += pre[i-1] + (s[i]-'0');
		}
		int dp[n];
		memset(dp, 0, sizeof dp);
		for (int i = 0; i < n-1; ++i)
		{
			int xr = (s[i]-'0') ^ 1;
			if(i+k-1<n)
				xr += pre[i+k-1] - pre[i];
			else
				xr += pre[n-1] - pre[i];
			if(i+k<n)
				xr += dp[i+k];
			int r = pre[n-1] - pre[i] + (s[i]-'0');
			dp[i] = min(r,xr);
		}
		int cnt = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			int s = dp[i];
			if(i)
				s += pre[i-1];
			cnt = min(s,cnt);
		}
		cout<<cnt<<"\n";
	}
	return 0;
}