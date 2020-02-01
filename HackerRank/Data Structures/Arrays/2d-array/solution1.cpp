int hourglassSum(vector<vector<int>> arr)
{
    int max= -1000;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
           int hourglass = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

           if(hourglass > max)
                max = hourglass;
        }
    }
    return max;
}