class FirstUnique {
public:
    unordered_map<int, int> counts;
    queue<int> q;
    FirstUnique(vector<int>& nums)
    {
        for(auto x: nums)
            add(x);
    }
    
    int showFirstUnique()
    {
        while(!q.empty() && counts[q.front()] >= 2)
            q.pop();
        if(q.empty())
            return -1;
        return q.front();
    }
    
    void add(int value) {
        counts[value]++;
        q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */