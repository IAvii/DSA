class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        bool isPositive = true;

        if (dividend >= 0 && divisor < 0) isPositive = false;
        if (dividend < 0 && divisor > 0) isPositive = false;

        long long n = abs((long long) dividend);
        long long d = abs((long long) divisor);

        long long ans = 0;

        while(d <= n) {
            int cnt = 0;

            while ((d << (cnt+1)) <= n) {
                cnt += 1;
            }
            ans += (1 << cnt);
            n -= d << cnt;
        }
        if (ans < INT_MIN && !isPositive) return INT_MIN;
        if (ans > INT_MAX && isPositive) return INT_MAX;

        return isPositive ? ans : ans * -1;
    }

};