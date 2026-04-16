class Solution {
public:
    int lessDaysRequired(vector<int>& weights, int days, int w) {
        int resultDay = 1;

        int currentLoad = 0;

        for (int weight : weights) {
            if (currentLoad + weight > w) {
                resultDay++;

                currentLoad = weight;
            } else {
                currentLoad += weight;
            }
        }
        
        return resultDay <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int wholeSum = 0;
        int maxweight = *max_element(weights.begin(),weights.end());

        for (int weight: weights) {
            wholeSum += weight;
        }

        int minw = maxweight, maxw = wholeSum;
        int ans = 0;

        while (minw <= maxw) {
            int w = (minw + maxw) /2;

            if (lessDaysRequired(weights, days, w)) {
                ans = w;
                maxw = w -1;
            } else {
                minw = w+1;
            }
        }

        return ans;
    }
};