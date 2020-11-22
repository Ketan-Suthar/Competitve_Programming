#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define REP(i,n) for(int i=1; i<=n;i++)
#define swap(a,b) a^=b^=a^=b;
#define MAX 30
int arr1[MAX+2], arr2[MAX+2];

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		REP(i,n) cin>>arr1[i];
		REP(i,n) cin>>arr2[i];
		sort(arr2,arr2+n+1);
		sort(arr1,arr1+n+1);
		// REP(i,n) cout<<arr1[i]<<" ";
		// cout<<endl;
		// REP(i,n) cout<<arr2[i]<<" ";
		// cout<<endl;
		int i=1, j=n;
		while(k-- && i<=n && j>=1)
		{
			if(arr1[i] < arr2[j])
			{
				swap(arr1[i], arr2[j]);
				++i, --j;
			}
			else break;
		}
		// REP(i,n) cout<<arr1[i]<<" ";
		int sum=0;
		REP(i,n) sum+=arr1[i];
		cout<<sum<<"\n";
	}
	return 0;
}