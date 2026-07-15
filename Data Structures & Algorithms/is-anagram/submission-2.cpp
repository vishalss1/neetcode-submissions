class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> mp;

        for(int i : s) {
            mp[i]++;
        }

        for(int i : t) {
            if(mp[i] == 0) {
                return false;
            }
            mp[i]--;
        }

        return true;
    }
};