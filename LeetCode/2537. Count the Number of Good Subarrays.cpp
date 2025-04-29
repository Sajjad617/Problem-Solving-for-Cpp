class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            long long re = 0, pair=0, l=0;
            unordered_map<int, int> mp;
            for(int i=0; i<nums.size(); i++)
            {
                pair += mp[nums[i]]++;
                while(pair >= k)
                    pair -= --mp[nums[l++]];
                
                re += l;
            }
            return re;
        }
    };