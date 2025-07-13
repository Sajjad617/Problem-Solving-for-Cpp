class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int re = 0;
        vector<vector<int>> data(26, vector<int>(26));

        for(auto x : words)
        {
            int i = x[0]-'a';
            int j = x[1]-'a';
            if(data[j][i])
            {
                re +=4;
                --data[j][i];
            }
            else
            {
                ++data[i][j];
            }
        }
        for(int i=0; i<26; i++)
        {
            if(data[i][i])
                return re+= 2;
        }
        return re;
    }
};