int beautifulPairs(vector<int> A, vector<int> B)
{
    map<int, int> m1, m2;
    bool flag=false;
    int pairs=0;
    for (int i=0;i<A.size();i++)
        m1[A[i]]++;
    for (int i=0;i<B.size();i++)
        m2[B[i]]++;

    map<int, int>::iterator it = m1.begin();
    while(it!=m1.end())
    {
        pairs+=min(it->second, m2[it->first]);
        if (it->second!=m2[it->first])
            flag=true;
        it++;
    }
    if (flag)
        return pairs+1;
    return pairs-1;
}