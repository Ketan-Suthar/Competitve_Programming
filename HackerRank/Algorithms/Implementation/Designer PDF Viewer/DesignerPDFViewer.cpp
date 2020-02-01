// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word)
{
    int max = INT_MIN;

    for(int i=0; i<word.length(); ++i)
        if(h[(int)word[i]-97] > max)
            max = h[(int)word[i]-97];

    return max*word.length();

}
