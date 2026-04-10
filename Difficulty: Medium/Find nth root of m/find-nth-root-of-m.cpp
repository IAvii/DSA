class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int ans =-1;
        if (m == 0) {
            return 0;
        }
        for (int i = 1; i<=m; i++) {
            if ((int)pow(i, n) == m) {
                int ans = i;
                return ans;
            } else if ((int)pow(i, n) > m) {
                break;
            }
        }
        
        return -1;
    }
};