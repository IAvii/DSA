class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int range = (1 << n);

        vector<vector<int>> powerSet;

        int k =0;
        
        for (int i =0; i<range; i++) {
            vector<int> subset;

            if ( i == (1 << k)) {
                k++;
            }

            int j =0;
            while (j < k) {
                if (((i >> j) & 1)) {
                    subset.push_back(nums[j]);
                }
                j++;
            }
            powerSet.push_back(subset);
            
        }
        return powerSet;
    }
};