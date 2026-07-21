class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;

        int maxL = 0;
        int maxR = 0;

        int i = 0;
        int j =  n - 1;

        int area = 0;

        while(i < j) {
            maxL = max(maxL, height[i]);
            maxR = max(maxR, height[j]);

            if(maxL <= maxR) {
                area += maxL - height[i];
                i++;
            } else if(maxR < maxL){
                area += maxR - height[j];
                j--;
            }
        }

        return area;
    }
};
