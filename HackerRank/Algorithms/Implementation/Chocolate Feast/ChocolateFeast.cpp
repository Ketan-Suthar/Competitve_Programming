int chocolateFeast(int n, int c, int m)
{
    int sum = n / c;
    if (sum < m)
        return sum;
    if (sum == m)
        return sum + 1;
    int choc = sum, wrap = choc;
    do
    {
        choc += wrap / m;
        wrap = (wrap / m) + (wrap % m);
    }while (wrap >= m);
    return choc;
}