
int reverse(int n)
{
    while(!n%10)
        n = n/10;

    int rev=0;
    while(n)
    {
        rev = rev*10 + (n%10);
        n = n/10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k)
{
    int count=0;
    for(int temp=i; temp<=j; ++temp)
    {
        int diff = abs(temp - reverse(temp));
        if(diff%k==0)
            ++count;
    }
    return count;
}
