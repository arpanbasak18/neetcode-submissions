class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen = 0, resIdx = 0;

        for (int i = 0; i < s.size(); i++) {
            // odd length
            int l = i, r = i;
            while (l >= 0 && r < s.size() &&
                   s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    resIdx = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }

            // even length
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.size() &&
                   s[l] == s[r]) {
                if (r - l + 1 > maxLen) {
                    resIdx = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(resIdx, maxLen);
    }
};