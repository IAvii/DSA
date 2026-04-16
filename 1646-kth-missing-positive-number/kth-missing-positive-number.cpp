class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low =0, high= n-1;

        while (low <= high) {
            int mid = (low+high) / 2;

            int missingEls =  (arr[mid]-1) -mid; 
            
            if (missingEls < k) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        return k+high+1;
    }
};