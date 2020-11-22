// set::find() function 
#include <bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    set <int> preSum;
    bool isHappy(int n)
    {
        if(n == 1)
            return true;
        
        int squareSum = 0, temp = n;
        while(temp)
        {
            int rem = temp % 10;
            squareSum += rem * rem;
            temp /= 10;
        }
        
        if(*(preSum.find(squareSum)) !=  preSum.size())
            return false;
    
        preSum.insert(squareSum);
        return isHappy(squareSum);
    }
};