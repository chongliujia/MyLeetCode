/*
 * Date: 10/01/2020
 * Author: jiachongliu
 * Times: 1;
 */

class Solution {
    public:
        string modifyString(string s) {
            const int n = s.length();
            for (int i = 0; i < n; ++i) {
                if (s[i] != '?') continue;
                for (char c : "abc") {
                    if ((i == 0 || s[i - 1] != c) && (i == n - 1 || s[i + 1] != c)) {
                        s[i] = c;
                        break;
                    }
                }
            }

            return s;
        }
};
