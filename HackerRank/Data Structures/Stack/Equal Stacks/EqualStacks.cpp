int minimum(int a, int b, int c)
{
    if (a <= b && a <= c) 
        return a; 
    else if (b <= a && b <= c) 
        return b; 
    else
        return c;
    return 0; 
}

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
{
    int h1size = h1.size();
    int h2size = h2.size();
    int h3size = h3.size();

    if(h1size ==0 || h2size == 0 || h3size == 0)
        return 0;
        
    stack <int> s1, s2, s3;

    if(h1size)
        s1.push(h1[h1size-1]);

    if(h2size)    
        s2.push(h2[h2size-1]);
    
    if(h3size)
        s3.push(h3[h3size-1]);
    
    for(int i=h1size-2; i>=0; --i)
        s1.push(s1.top() + h1[i]);
        
    for(int i=h2size-2; i>=0; --i)
        s2.push(s2.top() + h2[i]);
        
    for(int i=h3size-2; i>=0; --i)
        s3.push(s3.top() + h3[i]);
        
    int s1top = s1.top(), s2top = s2.top(), s3top = s3.top();
    int min_ = minimum(s1top, s2top, s3top);
    while( true )
    {
        
        if(s1top == s2top && s2top == s3top)
            return s1top;
        
        while(!s1.empty() && s1.top() > min_)
            s1.pop();
        while(  !s2.empty() && s2.top() > min_ )
            s2.pop();
        while( !s3.empty() && s3.top() > min_ )
            s3.pop();

        if(s2.empty() || s1.empty() || s3.empty() )
        {
            min_ = 0;
            break;
        }
        
        s1top = s1.top();
        s2top = s2.top();
        s3top = s3.top();
       
        min_ = minimum(s1top, s2top, s3top);
        
    }
    if(min_ < 0)
        return 0;
    else
        return min_;
}