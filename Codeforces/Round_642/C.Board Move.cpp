#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define REP(i,n) for(int i=0; i<n;i++)
#define MAX 5*100000

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		lli res=0;
		for(lli i=1; i<=(n/2); i++)
		{
			res += (2*i+1)*i;
			res += (2*i+1)*i;
			res += (2*i+1-2)*i;
			res += (2*i+1-2)*i;
		}
		cout<<res<<"\n";
	}
	return 0;
}
