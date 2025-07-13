class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        if(nums[0] >= n)
        {
            return n;
        }

        for(int i=1; i<n; i++)
        {
            int cnt = n-i;
            if(nums[i-1]< cnt && nums[i] >= cnt)
            {
                return cnt;
            }
        }
        return -1;
    }
};