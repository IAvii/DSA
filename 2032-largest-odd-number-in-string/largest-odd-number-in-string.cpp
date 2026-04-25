class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;

        for (int i=num.size()-1; i>=0; i--) {
            if ((num[i] - '0') % 2 != 0 ) {
                ind = i;
                break;
            } 
        }

        int i = 0;
        while (i<num.size() && num[i] == '0') {
            i++;
        }

        return num.substr(i, ind - i +1);
    }
};