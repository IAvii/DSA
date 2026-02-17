class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        int n = nums.size();
        int low1=0, low2=0, high1=n-1, high2=n-1;
        int last = -1, first = -1;
        
        while (low1<=high1 || low2<=high2){
            int mid1 = (low1+high1)/2;
            int mid2 = (low2+high2)/2;
            if (nums[mid1] == target) {
                last = mid1;
                low1 = mid1 + 1;
            }
            else if (nums[mid1] < target) {
                low1 = mid1 + 1;
            } else {
                high1 = mid1 - 1;
            }

            if (nums[mid2] == target) {
                first = mid2;
                high2 = mid2-1;
            }
            else if (nums[mid2] < target) {
                low2 = mid2 + 1;
            } else {
                high2 = mid2 - 1;
            }
            
        }
        return {first, last};
    }
};