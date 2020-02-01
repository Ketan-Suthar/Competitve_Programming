#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
            int a;
            cin>>a;
            v.push_back(a);
    }
    int q;
    cin>>q;
    int num;
    for(int i=0;i<q;++i)
    {
        cin>>num;
        vector<int>::iterator low,up;
        if(binary_search(v.begin(),v.end(),num))
        {
            low=lower_bound(v.begin(),v.end(),num);
            cout<<"Yes "<<(low-v.begin()+1);
        }
        else
        {
            up=upper_bound(v.begin(),v.end(),num);
            cout<<"No "<<(up-v.begin()+1);
        }
        cout<<"\n";
    }   
    return 0;
}
