
// Complete the saveThePrisoner function below.
int saveThePrisoner(int p, int m, int id)
{
    if((m+id-1)%p==0)
        return p;
    return ((m+id-1)%p);

}
