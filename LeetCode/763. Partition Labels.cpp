class Solution {
    public:
        vector<int> partitionLabels(string s) {
            vector<int> re;
            vector<int> cnt(26);
    
            for(int i=0; i<s.size(); i++)
            {
                cnt[s[i]-'a'] = i;
            }
            int l = 0, r = 0;
            for(int i=0; i<s.size(); i++)
            {
                r = max(r, cnt[s[i]-'a']);
                if(r==i)
                {
                    re.push_back(i-l+1);
                    l=i+1;
                }
            }
            return re;
        }
    };