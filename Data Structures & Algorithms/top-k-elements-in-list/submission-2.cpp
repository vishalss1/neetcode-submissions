class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return {};

        unordered_map<int, int> mp;

        for(int x: nums) {
            mp[x]++;
        }
        
        // need the highest freqs so use heap
        priority_queue<pair<int,int>> pq;
        for(auto x: mp) {
            pq.push({x.second, x.first});
        }

        vector<int> result;

        while(k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
