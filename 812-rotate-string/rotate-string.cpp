class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i=0; i<s.size(); i++) {
            string rotate = s.substr(i, s.size() - i) + s.substr(0, i);
  
            if (rotate == goal) {
                return true;
            }
        }
        return false;
    }
};