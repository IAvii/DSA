class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        int n = strs.size();

        int maxLen= max(strs[n-1].size(), strs[0].size());

        int prefixCounter = 0;

        while(maxLen--) {
            if (strs[0][prefixCounter] == strs[n-1][prefixCounter]) {
                prefixCounter++;
            } else break;
        }

        return strs[0].substr(0, prefixCounter);
    }
};