class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int L = 0, H = n-1;
        int ans = INT_MAX;

        while (L <= H) {
            int mid = (L+H)/2;
            if (nums[L] <= nums[mid]) {
                ans = min(ans, nums[L]);
                L=mid+1;
            } else {
                ans = min(ans, nums[mid]);
                H=mid-1;
            }
        }
        return ans;
    }
};