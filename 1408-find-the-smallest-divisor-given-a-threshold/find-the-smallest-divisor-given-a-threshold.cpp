class Solution {
public:
    bool checkSum(vector<int>& nums, int threshold, int divisor) {
        int sum =0;
        for (auto &num: nums) {
            sum += (num + divisor -1) / divisor;
            if (sum > threshold) return false;
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int amax = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = amax;
        int ans = 0;

        while (low <= high) {
            int mid = (low + high)/2;

            if (checkSum(nums, threshold, mid)) {
                ans = mid;
                high = mid -1;
            } else {
                low = mid +1;
            }
        }
        return ans;
    }
};