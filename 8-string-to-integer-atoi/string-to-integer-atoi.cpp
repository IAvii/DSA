class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int i =0;

        while (i<s.size() && s[i] == ' ') {
            i++;
        }

        int sign = 1;
        if (i<s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-')? -1 : 1;
            i++;
        }
        while (i<s.size()) {
            if (!isdigit(s[i])) {
                return (int) sign * num;
            }
            num = num * 10 + (s[i] - '0');

            if (sign * num <= INT_MIN) return INT_MIN;
            if (sign * num >= INT_MAX) return INT_MAX;

            i++;
        }

        return  (int) sign * num;
    }
};