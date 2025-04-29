class Solution {
    public:
        int countAsterisks(string s) {
            int re = 0;
            int cal = 0;
    
            for (auto x : s) {
            if (x == '|')
                ++cal;
            else if (x == '*' && cal % 2 == 0)
                ++re;
            }
    
            return re;
        }
    };