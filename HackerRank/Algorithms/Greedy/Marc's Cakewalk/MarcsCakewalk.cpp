// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> calorie)
{
    long res = 0ll;
    sort(calorie.begin(), calorie.end());
    
    int cnt = 0;
    
    for (int i = calorie.size()-1; i >= 0; i--)
    {
        res += (1ll * calorie[i] *  (1ll << cnt));
        cnt++;
    }
   return res;
}