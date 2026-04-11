class Solution {
public:
    bool calculateTotalHours(vector<int> &piles, int speed, int h) {
        long long hours=0;
            for (int &pile: piles) {
                hours += (pile + speed -1) / speed;
                if (hours > h ) return false;
            }
        return hours <=h;
    }

    
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int start =1, end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (calculateTotalHours(piles, mid,h)) {
                ans = mid;
                end = mid -1;
            } else {
                start = mid +1;
            }

        }
        return ans;
    }
};