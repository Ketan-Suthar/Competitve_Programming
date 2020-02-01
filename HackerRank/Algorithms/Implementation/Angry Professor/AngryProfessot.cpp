// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a)
{
    int count=0;
    for(int i=0; i<a.size(); ++i)
    {
        if(a[i] <= 0)
            ++count;

        if(count >= k)
            return "NO";
    }
    return "YES";
}