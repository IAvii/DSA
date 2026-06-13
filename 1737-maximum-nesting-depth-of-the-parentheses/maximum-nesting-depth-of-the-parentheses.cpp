class Solution {
public:
    int maxDepth(string s) {

        int depth = 0;
        int count = 0;
        
        for (int i =0; i<s.size(); i++) {
            if (s[i] == '(' || s[i] == ')') {
                if (s[i] == '(') {
                count++;
                } else if (s[i] == ')') {
                    count--;
                }
                depth = max(depth, count);
            } else {
                continue;
            }
        }

        return depth;
    }
};