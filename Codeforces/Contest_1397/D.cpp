#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int cnt[26];

void fun(int arr[], int n)
{
	bool turn = 1;
	int prev = -1;
	while(1)
	{
		int i = 0;
		for(; i<n; i++)
			if((prev==-1 && arr[0]) || (arr[i]!=0 && prev!=i))
				break;
		if(i==n)
			break;
		else
		{
			--arr[i];
			prev = i;
		}
		turn = !turn;
	}
	if(turn)
		cout<<"HL";
	else
		cout<<"T";
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
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		fun(arr, n);
		cout<<'\n';
	}
	return 0;
}