class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        if (n == 0) return {};

        for(int i = 0; i < n; i++) {
            int comp = target - nums[i];
            if(mp.count(comp)) {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};
