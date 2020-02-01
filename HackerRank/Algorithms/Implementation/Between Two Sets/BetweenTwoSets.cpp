#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b)
{
    // Complete this function
        int count=0;
        int flag=0,flag2=0,nb=b.size(),na=a.size();
        for(int i=1;i<=b[nb-1];++i)
        {
                for(int j=0;j<na;++j)
                {
                        if(i%a[j]==0)
                                flag=1;
                        else
                        {
                                flag=0;
                                break;
                        }
                }
                if(flag==1)
                {
                        for(int j=0;j<nb;++j)
                        {
                                if(b[j]%i==0)
                                        flag2=1;
                                else
                                {
                                        flag2=0;
                                        break;
                                }
                        }
                        
                         if(flag2==1)
                               ++count;
                        
                             
                }      
        }
        return count;               
               
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}