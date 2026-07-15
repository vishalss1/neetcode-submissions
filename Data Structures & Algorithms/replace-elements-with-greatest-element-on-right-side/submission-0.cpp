class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        for(int i = 0; i < n; i++) {
            int greatest = -1;
            for(int j = i+1; j < n; j++) {
                if(arr[j] > greatest) greatest = arr[j];
            }
            result.push_back(greatest);
        }

        return result;
    }
};