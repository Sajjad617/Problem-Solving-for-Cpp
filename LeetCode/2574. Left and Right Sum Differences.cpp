class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        vector<long long int> left(nums.size(), 0);
        vector<long long int> right(nums.size(), 0);

        left[0] = nums[0];
        for(int i = 1; i< nums.size(); i++)
        {
            left[i] = left[i-1] + nums[i];
        }
        
        right[nums.size()-1] = nums[nums.size()-1];
        int c = nums.size()-2;
        for(int i = c; i>=0; i--)
        {
            right[i] = right[i+1] + nums[i];
            
        }
        for(int i = 0; i<nums.size(); i++)
        {
            ans[i] = abs(left[i] - right[i]);
            
        }

        return ans;
    }
};