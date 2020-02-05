int getPivot(int n)
{
    while(n > 0)
    {
        if(n%3 == 0)
            break;
        else
            n -= 5;
    }
    return n;
}
void decentNumber(int n)
{
    int pivot = getPivot(n);
    if(pivot < 0) 
        cout << "-1" << endl;
    else
    {
        int repeat = pivot/3;
        while(repeat--)
            cout << "555";
        repeat = (n-pivot)/5;
        while(repeat--)
            cout << "33333";
        cout << endl;
    }
}