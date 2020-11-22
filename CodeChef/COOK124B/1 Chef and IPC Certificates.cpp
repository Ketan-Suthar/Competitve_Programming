#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,k;
	cin>>n>>m>>k;
	int res = 0;
	for(int i=0;i<n;i++)
	{
		int sum = 0;
		for(int j=0;j<k;j++)
		{
			int a;cin>>a;
			sum += a;
		}
		int min;
		cin>>min;
		if(min <=10 && sum >= m)
			res++;
	}
	cout<<res;
	return 0;
}