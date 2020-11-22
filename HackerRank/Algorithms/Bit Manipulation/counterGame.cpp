string counterGame(long n)
{
    n = n - 1;
    int count = 0;
    while(n)
    {
        n &= (n-1);
        ++count;
    }
    if(count & 1)
        return "Louise";
    return "Richard";
}