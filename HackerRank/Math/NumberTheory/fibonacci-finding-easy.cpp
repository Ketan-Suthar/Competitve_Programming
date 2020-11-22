#include <bits/stdc++.h>

#define lli long long int
    
int MOD = (1e9)+7;
lli arr[3], I[3][3], T[3][3], n;

using namespace std;

void mul(lli A[3][3], lli B[3][3], int dim)
{
    lli res[dim+1][dim+1];
    for(int i=1; i<=dim; i++)
    {
        for(int j=1; j<=dim; j++)
        {
            res[i][j] = 0;
            for(int k=1; k<=dim; k++)
            {
                lli x = (A[i][k] * B[k][j]) % MOD;
                res[i][j] = (res[i][j] + x) % MOD;
            }
        }
    }
    for(int i=1; i<=dim; i++)
        for(int j=1; j<=dim; j++)
            A[i][j] = res[i][j];
}

lli solve(lli arr[], lli n)
{
    if(n <= 2) return arr[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n--;
    while(n)
    {
        if(n%2)
            mul(I, T, 2), n--;
        else
            mul(T, T, 2), n/=2;
    }

    lli fn = (arr[1] * I[1][1] + arr[2] * I[2][1]) % MOD;
    return fn;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin>>arr[1]>>arr[2]>>n;
        cout << solve(arr,++n) << "\n";
    }
}