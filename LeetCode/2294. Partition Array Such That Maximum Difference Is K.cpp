class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int re = 1, a = nums[0];
        for(auto &b : nums)
        {
            if(b-a > k)
            {
                a = b;
                re++;
            }
        }
        return re; 
    }
};