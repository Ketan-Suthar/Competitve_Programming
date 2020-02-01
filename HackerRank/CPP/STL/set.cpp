#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int op;
        cin>>op;
        int num;
        cin>>num;
        switch(op)
        {
            case 1:
            {
                s.insert(num);
                break;
            }
            case 2:
            {
                set<int>::iterator itr=s.find(num);
                if(itr != s.end())
                    s.erase(num);
                break;
            }
            case 3:
            {
                set<int>::iterator itr=s.find(num);
                if(itr != s.end())
                    cout<<"Yes";
                else
                    cout<<"No";
                cout<<"\n";
            }
        }
    }   
    return 0;
}



