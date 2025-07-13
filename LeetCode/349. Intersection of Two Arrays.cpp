class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            map<int, int> mp;
            for(auto x : nums1)
            {
                mp[x] = 1;
            }
            vector<int> v;
            for(auto x : nums2)
            {
                if(mp[x]==1)
                {
                    v.push_back(x);
                    mp[x] = 2;
                }
            }
            return v;
        }
    };