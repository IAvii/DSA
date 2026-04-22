class Solution {
public:
    string removeOuterParentheses(string s) {

        int count = 0;
        string str = "";

        for (auto &ch: s) {
            if (ch == '(') {
                count++;
                if (count > 1) {
                    str += ch;
                }
            } else {
                if (count > 1) {
                    str += ch;
                }
                count--;
            }
        }

        return str;
    }
};