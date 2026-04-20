class Solution {
public:
    int check(vector<int>& nums, int k, int sum) {
        int subarr = 1;
        int arrsum = 0;

        for (auto num: nums) {
            if (arrsum + num > sum) {
                subarr++;
                arrsum = num;
            } else {
                arrsum += num;
            }
        }
        return subarr <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int minSum = *max_element(nums.begin(), nums.end());
        int maxSum = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;

        while (minSum <= maxSum) {
            int mid = (minSum + maxSum) / 2;

            if (check(nums,k,mid)) {
                ans = mid;
                maxSum = mid -1;
            } else {
                minSum = mid +1;
            }
        }
        
        return ans;
    }
};