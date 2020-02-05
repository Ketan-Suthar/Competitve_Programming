string appendAndDelete(string s, string t, int k)
{
    if(s == t)
        return "Yes";

    int len_s = s.length(), len_t=t.size();
    int i;
    
    int minlen = min(len_s, len_t);

    for(; s[i] == t[i] && i<minlen; ++i);


    if((len_s+len_t-(2*i))>k)
        return "No";
    else if((len_s+len_t-2*i)%2==k%2)
        return "Yes";
    else if((len_s+len_t-k)<0)
        return "Yes";

    return "No";
}