
vector<int> circularArrayRotation(vector<int> arr, int K, vector<int> Q)
{
    int N = arr.size();
    int rot = K % N;
    vector<int> result;

    for (int i = 0; i < Q.size(); i++)
    {
        int idx = Q[i];
        if (idx - rot >= 0)
            result.push_back(arr[idx - rot]);
        else
            result.push_back(arr[idx - rot + N]);

    }
    return result;
}