class Solution {
public:
    int maxDifference(string s) {
        vector<int> data(26);
        for(auto x : s)
        {
            ++data[x-'a'];
        }
        int mn = s.length();
        int mx = 0;
        for(auto x : data)
        {
            if(x==0)
                continue;
            else if(x%2==0)
                mn = min(mn, x);
            else
                mx = max(mx, x);
        }
        return mx-mn;
    }
};