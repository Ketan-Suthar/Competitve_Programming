#include <bits/stdc++.h>
using namespace std;

#define swap(a, b) a^=b^=a^=b

bool check(string a, string b, int a_i, int k, int size)
{
    if(a==b)
        return 1;
    if(a_i==size)
    {
        if(a==b || (a.substr(0,size) == b.substr(0,size) && a[size]!='z'))
            return 1;
        else
            return 0;
    }
    if(a[a_i+1] == b[a_i])
    {
        swap(a[a_i], a[a_i+1]);
        return check(a,b,a_i+1,k,size);
    }
    
    int ik = a_i + k, i;
    for(i=a_i; i<=size && i<ik; i++)
        if(a[i] != a[i+1])
            break;
    if(i==a_i || a[a_i]=='z')
        return check(a,b,a_i+1,k,size);
    for(int ind=a_i; ind<=i; ind++)
        a[ind] = b[ind];
    return check(a,b,i,k,size);
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        (check(a,b,0,k,n-1)) ? cout<<"YES" : cout<<"NO";
        cout<<'\n';
    }
    return 0;
}
