
// Complete the viralAdvertising function below.
int viralAdvertising(int n)
{
    int totallike = 0, init=5;

    for(int i=0; i<n; ++i)
    {
        totallike += init/2;
        init = (init/2)*3;
    }
    return totallike;
} 