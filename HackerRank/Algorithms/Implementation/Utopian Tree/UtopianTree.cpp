// Complete the utopianTree function below.
int utopianTree(int n)
{
    int height = 1;
    if(n == 0)
        return height;
    for(int i=1; i<=n; ++i)
    {
       if(i%2 == 1)
            height = height*2;
        else
            height += 1; 
    }
    return height;
}