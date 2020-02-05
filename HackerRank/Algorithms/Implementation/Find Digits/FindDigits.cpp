// Complete the findDigits function below.
int findDigits(int n)
{
    int temp=n, digit, count=0;
    while(n)
    {
        digit = n%10;
        if(digit != 0 && temp % digit == 0)
            ++count;
        n = n/10;
    }
    return count;
}