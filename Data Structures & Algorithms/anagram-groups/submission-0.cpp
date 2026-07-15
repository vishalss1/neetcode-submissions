class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return {};

        unordered_map<string, vector<string>> mp;

        for(string x: strs) {
            string key = x;
            sort(key.begin(), key.end()); //signature
            mp[key].push_back(x);
        }

        vector<vector<string>> result;
        for(auto x: mp) {
            result.push_back(x.second);
        }

        return result;
    }
};
