#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		lli a,b;
		cin>>a>>b;
		if(a==1)
			cout<<0;
		else if(a==2)
			cout<<b;
		else
			cout<<2*b;
		cout<<"\n";
	}
	return 0;
}