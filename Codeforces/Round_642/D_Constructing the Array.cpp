#include <bits/stdc++.h>

using namespace std;
#define ss second
#define ff first
#define lli long long int
#define REP(i,n) for(int i=0; i<n;i++)
#define MAX 2*100000
lli arr[MAX+1];

void fill(int n)
{
	int s=0, e=n-1,mid=0;
	priority_queue<pair<int, pair<int,int>>> pq;
	pq.push({n,{-1,-n}});
	int cnt=1;
	while(!pq.empty())
	{
		s = -pq.top().ss.ff;
		e = -pq.top().ss.ss;
		pq.pop();
		mid = s + (e-s)/2;
		arr[mid] = cnt++;

		if(e==s) continue;
		if(s<mid)
			pq.push({mid-s, {-s,-(mid-1)}});
		if(mid<e)
			pq.push({e-mid, {-(mid+1), -e}});
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		fill(n);
		REP(i,n)
			cout << arr[i+1] <<" ";
		cout<<"\n";
	}
	return 0;
}