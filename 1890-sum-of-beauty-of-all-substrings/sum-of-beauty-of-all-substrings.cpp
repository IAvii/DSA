class Solution {
public:
    int beautySum(string s) {
        int bs = 0;
        int n = s.size();

        for (int i=0; i<n; i++) {
            int arr[26] = {0};
            for (int j=i; j<n; j++) {
                arr[s[j] - 'a']++;

                int minCount = INT_MAX;
                int maxCount = INT_MIN;

                for (int a: arr) {
                    if (a != 0) {
                        maxCount = max(maxCount, a); 
                        minCount = min(minCount, a); 
                    }
                }
                bs += (maxCount - minCount);
            }
        }
        return bs;
    }
};