class Solution {
  public:
    bool check(vector<int> &stalls, int k, int dist) {
        int count=1;
        int prev = stalls[0];
        
        for (int i=1; i<stalls.size(); i++) {
            if (stalls[i] - prev >= dist) {
                prev = stalls[i];
                count++;
            }
        }
        
        return count >= k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        
        int minDist = 1;
        int maxDist = stalls.back() - stalls[0];
        int ans = 0;
        
        while(minDist<=maxDist) {
            int mid = (minDist+maxDist)/2;
            
            if (check(stalls,k,mid)) {
                ans = mid;
                minDist = mid+1;
            } else {
                maxDist = mid-1;
            }
        }
        
        return ans;
    }
};