class Solution {
public:
    int maxDepth(string s) {

        int depth = 0;
        int count = 0;
        
        for (int chr: s) {
            if (chr == '(') count++;
            else if (chr == ')') count--;
            depth = max(depth, count);
        }
        return depth;
    }
};