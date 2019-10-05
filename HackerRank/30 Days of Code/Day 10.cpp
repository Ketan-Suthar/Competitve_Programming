#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    int currentCount = 0, maxCount = 0;
    for(int i = 0; ; i++)
    {
        int current = pow(2, i);
        int tempAnd = N & current;
        if(tempAnd == current)
        {
            currentCount++;
        }
        else
        {
            if(currentCount > maxCount)
            {
                maxCount = currentCount;   
            }
            currentCount = 0;
        }
        if(current > N)
        {
            break;
        }
    }
    
    cout << maxCount << endl;
    return 0;
}
