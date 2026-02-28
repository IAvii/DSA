class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        if (n < 2) {
            return 0;
        }
        while (low <= high) {
            int mid = low + (high - low) /2;
            if (low == 0 && nums[low+1] < nums[low]) {
                return low;
            }
            else if (high == n-1 && nums[high-1] < nums[high]) {
                return high;
            }
            else {
                if (mid == 0) {
                    low = mid + 1;
                } 
                else if (mid == n-1) {
                    high = mid - 1;
                } 
                else {
                    if ((nums[mid-1] < nums[mid]) && (nums[mid] > nums[mid+1])) {
                        return mid;
                    } 
                    else if (nums[mid-1] > nums[mid] && nums[mid] >nums[mid+1]) {
                        high = mid - 1;
                    }
                    else {
                        low = mid + 1;
                    }
                }
            }
        }
        return -1;
    }
};

