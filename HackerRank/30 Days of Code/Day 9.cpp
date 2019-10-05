#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int factorial(int n)
{
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}


int main() {
 int n;
    cin>>n;
    int f=factorial(n);
    cout<<f;
    return 0;
}
