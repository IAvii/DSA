class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> result;
        
        for (auto &el: nums) {
            m[el]++;
            if (m[el] == (n/3)+1) {
                result.push_back(el);
            }
        }
        return result;
    }
};