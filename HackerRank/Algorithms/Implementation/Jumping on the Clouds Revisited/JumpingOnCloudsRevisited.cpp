// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k)
{
    int energy = 100;
    int ind = 0, n = c.size();
    do
    {
        ind = (ind + k) % n;
        energy -= 1;
        if(c[ind])
            energy -= 2;
        cout<<energy<<" ";    
    }while(ind!=0);
    return energy;
}
