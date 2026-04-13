class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0;
        int count = 0;

        for (int bloom: bloomDay) {
            if (day >= bloom) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long NoF = 1LL*m*k;

        int maxDay = *max_element(bloomDay.begin(), bloomDay.end());
        int minDay = *min_element(bloomDay.begin(), bloomDay.end());

        if (bloomDay.size() < NoF) {
            return -1;
        }

        int ans = 0;

        while (minDay <= maxDay) {
            int day = (minDay + maxDay)/2;

            if (isPossible(bloomDay, m, k, day)) {
                ans = day;
                maxDay = day-1;
            } else {
                minDay = day + 1;
            }
        }

        return ans;
    }
};