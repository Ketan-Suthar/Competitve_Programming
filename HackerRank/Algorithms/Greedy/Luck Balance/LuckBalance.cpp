bool sortcol( const vector<int>& v1, const vector<int>& v2 )
{ 
    return v1[0] > v2[0]; 
} 
int luckBalance(int k, vector<vector<int>> contests)
{
    int result = 0;
    sort(contests.begin(), contests.end(), sortcol);

    for(int i=0; i<contests.size(); ++i)
    {
        if(contests[i][1] == 0)
            result += contests[i][0];
        else
        {
            if(k==0 )
                result -= contests[i][0];
            else
            {
                result += contests[i][0];
                --k;
            }
        }
    }
    return result;
}