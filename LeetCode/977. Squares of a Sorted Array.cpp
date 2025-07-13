class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> re(n);
        // int l = 0, r= n-1, p = n-1;
        // while(l<=r)
        // {
        //     int ls = nums[l]*nums[l];
        //     int rs = nums[r]*nums[r];
        //     if( ls > rs )
        //     {
        //         re[p] = ls;
        //         l++;
        //     }
        //     else
        //     {
        //         re[p] = rs;
        //         r--;
        //     }
        //     p--;
        // }
        // return re;
        for(auto&x : nums)
            x = x*x;
        
        sort(nums.begin(), nums.end());
        return nums;

    }
};