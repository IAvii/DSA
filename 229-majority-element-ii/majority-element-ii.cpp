class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,candidate1=0;
        int count2=0,candidate2=0;
        int n = nums.size();

        for (int i=0; i<n; i++) {
            if (count1==0 && nums[i]!= candidate2) {
                count1=1;
                candidate1=nums[i];
            }
            else if (count2==0 && nums[i]!= candidate1) {
                count2=1;
                candidate2=nums[i];
            }
            else if (candidate1 == nums[i]) {
                count1++;
            }
            else if (candidate2 == nums[i]) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        vector<int> res;
        count1=0;
        count2=0;
        int threshold = n /3;
        for (int i=0; i<n; i++) {
            if (candidate1 == nums[i]) {
                count1++;
            } 
            else if (candidate2 == nums[i]) {
                count2++;
            }
        }
        if (count1 > threshold) {
            res.push_back(candidate1);
        }
        if (count2 > threshold) {
            res.push_back(candidate2);
        }
        return res;
    }
};