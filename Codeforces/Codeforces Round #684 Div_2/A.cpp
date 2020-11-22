#include <bits/stdc++.h>
using namespace std;

#define endl '\n';

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cost[2],h;
		cin>>n>>cost[0]>>cost[1]>>h;
		string s;
		cin>>s;
		int res=0;
		for(char c:s)
		{
			int cc = c-'0';
			res += min(cost[cc], cost[1-cc] + h);
		}
		cout << res << endl;
	}
	return 0;
}