class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int re = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2)
                re -= nums[i];
            else
                re += nums[i];
        }
        return re;
    }
};