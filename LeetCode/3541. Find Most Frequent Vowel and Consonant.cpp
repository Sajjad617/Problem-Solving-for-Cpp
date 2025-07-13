class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(27);
        vector<int> c(26);
        for(auto x : s)
        {
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
            {
                v[x-'a']++;
            }
            else
            {
                c[x-'a']++;
            }
        }
        int mxv = 0, mxc = 0;
        for(auto x : v)
        {
            mxv = max(mxv, x);
        }
        for(auto x : c)
        {
            mxc = max(mxc, x);
        }
        return mxv+mxc;
    }
};