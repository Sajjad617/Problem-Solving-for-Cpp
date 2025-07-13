class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            
            map<int, int> mp;
            int re = 0;
            for(auto x : dominoes)
            {
                int a = min(x[0], x[1]);
                int b = max(x[0], x[1]);
    
                int cal = a*10+b;
                
                re += mp[cal]++;
            }
            return re;
            
        }
    };