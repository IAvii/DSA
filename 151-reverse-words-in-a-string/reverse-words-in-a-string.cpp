class Solution {
public:
    string reverseWords(string s) {
        int p = s.size() -1;
        string result = "";

        while (p>=0) {

            while (p >=0 && s[p] == ' ') {
                p--;
            }

            if (p < 0) break;

            int end = p;

            while (p >=0 && s[p] != ' ') {
                p--;
            }

            if (!result.empty()) {
                result += " ";
            }

            result += s.substr(p+1, end -p);
        }

        return result;
    }
};