class Solution {
public:
    int countBinarySubstrings(string s) {
        int re = 0;
        int pre = 0;
        int cur = 1;

        for (int i = 0; i + 1 < s.length(); ++i){
            if (s[i] == s[i + 1])
                ++cur;
            else 
            {
                re += min(pre, cur);
                pre = cur;
                cur = 1;
            }
        }

        return re + min(pre, cur);
        
    }
};