class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        if(n == 0) return {};

        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) {
            int composit = target - numbers[i];

            if(mp.count(composit)) {
                return {mp[composit]+1, i+1};
            }

            mp[numbers[i]] = i;
        }

        return {};
    }
};
