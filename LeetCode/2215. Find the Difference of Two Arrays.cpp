class Solution {
    public:
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            set<int> tk1(nums1.begin(), nums1.end());
            set<int> tk2(nums2.begin(), nums2.end());
            int cnt = 0;
            vector<vector<int>> v(2);
            for(auto x : tk1)
            {
                if(!tk2.contains(x)){
                    v[0].push_back(x);
                }
            }
            for(auto x : tk2)
            {
                if(!tk1.contains(x))
                    v[1].push_back(x);
            }
            return v;
        }
    };