#include <bits/stdc++.h>
using namespace std;

#define SIZE 100000

int suff[SIZE+1], pre[SIZE+1];
int arr[SIZE+1];

int gcd(int a, int b)
{
    if(b == 0)  return a;
    return gcd(b, a%b);
}
int main() 
{
	// your code goes here
	int t,n,q,l,r;
	cin >> t;
	while(t--)
	{
	    cin>>n>>q;
	    for(int i=1;i<=n;i++)   cin>>arr[i];
	    pre[0] = suff[n+1] = 0;
	    
	    for(int i=1;i<=n;i++)
	        pre[i] = gcd(arr[i], pre[i-1]);
	    for(int i=n;i>=0;i--)
	        suff[i]= gcd(suff[i+1],arr[i]);
	        
	    while(q--)
	    {
	        cin>>l>>r;
	        cout<<gcd(pre[l-1],suff[r+1])<<"\n";
	    }
	}
	return 0;
}
