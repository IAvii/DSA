class Solution {
public:
    int minBitFlips(int start, int goal) {
        int i = 0;
        int cnt = 0;
        while (i < 32) {
            if (((start >> i) & 1) != ((goal >> i) & 1)) {
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};