class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long re = 0;
            sort(nums.begin(), nums.end());
    
            for (int i = 0; i < nums.size(); ++i) 
            {
                auto j = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]);
                auto k = lower_bound(nums.begin() + i + 1, nums.end(), upper - nums[i] + 1);
                re += k - j;
            }
            return re;
            
        }
    };