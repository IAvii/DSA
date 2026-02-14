class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long  m = grid.size();
        long long ms = m*m;
        long long Sm = (1LL*(ms)*(ms+1))/2;
        long long S2m = (1LL*(ms)*(ms+1)*(2*ms+1))/6;
        long long S=0, S2=0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<m; j++) {
                S += grid[i][j];
                S2 += (long long)grid[i][j] * (long long)grid[i][j];
            }
        }

        long long val1 = S - Sm;
        long long val2 = S2 - S2m;
        val2 = val2 / val1;
        int x = (val1 + val2)/2;
        int y = val2 - x;

        return {(int) x, (int)y};
    }
};