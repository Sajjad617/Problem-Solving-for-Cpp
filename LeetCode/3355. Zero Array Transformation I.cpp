class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> v(n+1, 0);
        for(auto x : queries)
        {
            int l = x[0], r=x[1];
            v[l]++;
            v[r+1]--;
        }
        int re = 0;
        for(int i=0; i<n; i++)
        {
            re += v[i];
            if(re<nums[i])
                return false;
        }
        return true;
    }
};