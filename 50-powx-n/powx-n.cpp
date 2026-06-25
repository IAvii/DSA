class Solution {
public:
    double power(double x, long n) {
        if (n == 0) return 1.0;
        if (n == 1) return x;

        if (n % 2 == 0) 
            return power( x*x, n/2);
        
        return x * power( (x * x), (n-1) / 2);
    }
    double myPow(double x, int n) {
        long nn = n;

        if ( nn < 0) 
            return (1 / power(x, -1 * nn));
        
        return power( x, n);
    }
};