class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row =1; row<=numRows; row++) {
            vector<int> temp;
            int num=1;
            temp.push_back(num);
            
            for (int i=1; i<row; i++) {
                num *= row-i;
                num /= i;
                temp.push_back(num);   
            }
            ans.push_back(temp);
        }
        return ans;
    }
};