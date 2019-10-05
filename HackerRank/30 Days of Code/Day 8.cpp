#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string temp;
    getline(cin, temp);
    int N = stoi(temp);
            
    map<string, string> phoneList;
    for(int n = 0; n < N; n++){
        string name;
        string number;
        getline(cin, name);
        getline(cin, number);
        phoneList.insert(std::pair<string, string>(name, number));
    }
    
    string name;
    while(getline(cin, name))
    {
        std::map<string, string>::iterator it;
        it = phoneList.find(name);
        if (it == phoneList.end()){
            cout << "Not found" << endl;
        } else {
            cout << name << "=" << it->second << endl;
        }
    }
    
    return 0;
}
