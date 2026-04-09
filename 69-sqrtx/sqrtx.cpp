class Solution {
public:
    int mySqrt(int x) {
        int start =0, end =x, ans = 0;

        while (start <= end) {
            int mid = start + (end - start) /2;
            if((long long)mid*mid <= x) {
                ans = mid;
                start = mid +1;
            } else {
                end = mid -1;
            }
        }

        return ans;
    }
};