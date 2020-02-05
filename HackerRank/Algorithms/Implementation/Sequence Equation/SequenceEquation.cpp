// Complete the permutationEquation function below.
vector<int> permutationEquation(vector<int> p)
{
    int temp[p.size()+1];
    vector<int> result;
    
    for(int i=0; i<p.size(); ++i)
        temp[p[i]] = i+1;

    for(int i=1; i<=p.size(); ++i)
        result.push_back(temp[temp[i]]);
    return result;
}