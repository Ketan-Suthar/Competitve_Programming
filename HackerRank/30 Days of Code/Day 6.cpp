#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    int test;
    int N;
    cin>>T;
    string S;
    for(int j=0;j<T;j++){
        cin>>S;
        test=1;
        N=S.size();
        for(int i=1;i<N;i++){
            if(abs(S[i]-S[i-1])!=abs(S[N-i]-S[N-i-1])){
                test=0;
                break;
            }
        }
        if(test==0){
            cout<<"Not Funny"<<endl;
        } else{
            cout<<"Funny"<<endl;
        }
        
    }
    return 0;
}
