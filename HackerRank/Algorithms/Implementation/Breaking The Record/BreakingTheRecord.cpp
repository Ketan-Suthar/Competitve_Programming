#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) 
{
    // Complete this function
        vector <int> result;
        int countlow=0,counthigh=0;
        int low=score[0],high=score[0];
        for(int i=1;i<score.size();++i)
        {
                if(score[i]>high)
                {
                        high=score[i];
                        ++counthigh;
                }
                else if(score[i]<low)
                {
                        low=score[i];
                        ++countlow;
                }
        }
        result.push_back(counthigh);
        result.push_back(countlow);
        
        return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}