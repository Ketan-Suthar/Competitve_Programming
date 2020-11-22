class Solution {
//     string getSignature(string str) {
//         int alphabet[26] = {0};
//         for (auto c : str)
//             alphabet[c-97]++;
        
//         string result;
//         for (auto i : alphabet)
//             result += (char)(i+48);
        
//         return result;
//     }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int > anagramMap;
        vector<vector<string>> result;
        int count = -1;
        for (auto str : strs) {
            // string sig = getSignature(str);
            string sig = str;
            sort(sig.begin(), sig.end());
            if (anagramMap.count(sig)) {
                result[anagramMap[sig]].push_back(str);
            } else {
                result.push_back({str});
                anagramMap[sig] = ++count;
            }
        }
        
        return result;
    }
};

auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();