class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> v(n);
        int pre=-n;
        
        for(int j=0; j<n; j++)
        {
            if(s[j]==c)
                pre = j;

            v[j] = j-pre;
        }
        for(int i=pre-1; i>=0; i--)
        {
            if(s[i]==c)
                pre = i;
            v[i] = min(v[i], pre-i);
        }
        return v;

    }
};
