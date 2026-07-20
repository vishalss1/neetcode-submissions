class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        sort(nums.begin(), nums.end());

        int prev = nums[0];
        int cnt = 1; // 1 cause we are counting length not gaps
        int maxCnt = 1;
        for(int i=1; i<n; i++) {
            if(nums[i] == prev) continue;

            if(nums[i] - prev == 1) {
                cnt++;
            } else {
                maxCnt = max(maxCnt, cnt);
                cnt = 1;
            }

            prev = nums[i];
        }

        maxCnt = max(maxCnt, cnt); // the largest sequence might exist at the end of the loop

        return maxCnt;
    }
};
