#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main(int argc, char const *argv[])
{
	FAST;
	int t;cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a.size()==0 || a==b)
		{
			cout<<0<<endl;
			continue;
		}
		int count=0;
		int size=a.size();
		int start=0, end = size-1;
		string sub1;
		while(1)
		{
			start=0;
			while(start<size && a[start] == b[start])
				++start;
			if(start==size)
				break;
			end=start;
			for(int i=start;i<size;i+=2)
				if(a[i]!=b[i])
					end=i;
			for(int i=start;i<=end;i+=2)
				a[i]=b[i];
			++count;
		}
		cout<<count<<endl;
	}
}