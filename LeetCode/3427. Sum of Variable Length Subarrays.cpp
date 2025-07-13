class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);

        pre[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            pre[i] = pre[i-1]+nums[i];
        }

        int cal, re = 0;
        for(int i=0; i<n; i++)
        {
            cal = max(0, i-nums[i]);
            re += pre[i];
            if(cal-1>=0)
                re-= pre[cal-1];
        }
        return re;
    }
};