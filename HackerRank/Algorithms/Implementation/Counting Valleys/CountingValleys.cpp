// Complete the countingValleys function below.
int countingValleys(int n, string s)
{
     int j,i=0,cnt=0;
        
    for(j = 0; j < n; j++)
    {
        if(s[j] == 'U')
        {
            i = i + 1;
            if(i == 0)
                cnt++;
        }
        else if(s[j] == 'D')
        {
            i = i - 1;
        }
    }
        return cnt;

}