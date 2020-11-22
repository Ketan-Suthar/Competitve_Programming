#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define ll long long

int main(int argc, char const *argv[])
{
	ll n,q;
	cin>>n>>q;
	ll arr[n];
	for(ll i=0;i<n;i++) cin>>arr[i];
	while(q--)
	{
		ll op,x,y;
		cin>>op>>x>>y;
		if(op==1)
			arr[x-1] = y;
		else
		{
			ll count=0;
			// cout<<op<<' '<<x<<' '<<y<<' ';
			for(ll i=x-1;i<n;i++)
				if(arr[i] <= y)
				{
					count++;
					y -= arr[i];
				}
			cout<<count<<'\n';
		}
	}
}