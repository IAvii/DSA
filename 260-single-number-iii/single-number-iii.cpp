class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XOR = 0;
        for (int i = 0; i < nums.size(); i++) {
            XOR ^= nums[i];
        }

        int rightBit = XOR & ~(XOR -1);
        int XOR1 = 0;
        int XOR2 = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] & rightBit) {
                XOR1 ^= nums[i];
            } else {
                XOR2 ^= nums[i];
            }
        }  
        return {XOR1, XOR2};
    }
};