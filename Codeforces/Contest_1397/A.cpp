#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int cnt[26];

bool fun(string str[], int n)
{
	for(int i=0; i<n; i++)
		for(char x: str[i])
			++cnt[x-'a'];
	for (int i = 0; i < 26; ++i)
	{
		if(cnt[i]!=0 && (cnt[i]%n!=0))
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(cnt, 0, sizeof(cnt));
		int n;
		cin>>n;
		string arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		fun(arr, n) ? cout<<"YES" : cout<<"NO";
		cout<<'\n';
	}
	return 0;
}