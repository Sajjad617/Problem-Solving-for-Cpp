class Solution {
    public:
        int numRabbits(vector<int>& answers) {
            int ans = 0;
            vector<int> v(1000);
    
            for (auto x : answers) {
            if (v[x] % (x + 1) == 0)
                ans += x + 1;
            ++v[x];
            }
            return ans;
        }
    };