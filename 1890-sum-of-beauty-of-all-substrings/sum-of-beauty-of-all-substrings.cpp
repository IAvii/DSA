class Solution {
public:
    int beautySum(string s) {
        int bs = 0;
        int n = s.size();

        for (int i=0; i<n; i++) {
            unordered_map<char, int> m;
            for (int j=i; j<n; j++) {
                m[s[j]]++;

                int minCount = INT_MAX;
                int maxCount = INT_MIN;

                for (auto &a: m) {
                    maxCount = max(maxCount, a.second); 
                    minCount = min(minCount, a.second); 
                }
                bs += (maxCount - minCount);
            }
        }
        return bs;
    }
};