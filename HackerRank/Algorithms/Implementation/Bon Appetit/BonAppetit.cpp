void bonAppetit(vector<int> bill, int k, int b)
{
    int sum = 0;
    for(int i=0; i<bill.size(); i++)
        sum += bill[i];

    sum/2==b ? cout<<bill[k]/2 : cout<<"Bon Appetit";

}