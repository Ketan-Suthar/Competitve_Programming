#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double meal,total,a,b,c;
    int tip,tax;
    cin>>meal>>tip>>tax;
    a=(double)tip/100;
    b=(double)tax/100;
    total=(1+a+b)*meal;
    c=floor(total);
    if (total-c<=0.5)
    cout<<"The total meal cost is "<<c<<" dollars.";
    else
    cout<<"The total meal cost is "<<ceil(total)<<" dollars.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
