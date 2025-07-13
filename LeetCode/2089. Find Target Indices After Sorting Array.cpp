class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> data;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                data.push_back(i);
            }
        }
        return data;
    }
};