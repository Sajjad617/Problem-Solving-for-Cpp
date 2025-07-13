class Solution {
    public:
        int removePalindromeSub(string s) {
            int start = 0;
            int end = s.length();
            end--;
            while(start<end)
            {
                if(s[start]!=s[end])
                    return 2;
                
                start++;
                end--;
            }
            return 1; 
        }
    };