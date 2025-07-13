class Solution {
public:
    int minDeletion(string s, int k) {
        // vector<int> v(26, 0);
        vector<int> v(26, 0);
        for(auto x : s)
        {
            v[x-'a']++;
        }
        int re = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i+k<26; i++)
            re += v[i];
        
        return re;
    }
};