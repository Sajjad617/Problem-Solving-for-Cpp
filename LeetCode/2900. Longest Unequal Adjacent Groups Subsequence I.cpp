class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<int> v;
        int idx = -1;
        for(int i=0; i<groups.size(); i++)
        {
            if(idx != groups[i])
            {
                idx = groups[i];
                v.push_back(words[])
            }
        }
    }
};