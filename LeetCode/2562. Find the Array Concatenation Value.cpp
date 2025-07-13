class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long re = 0;
        int l = 0, n=nums.size();
        int r = n-1;
        // int re = 0;
        while(l<r)
        {   
            re += stoi(to_string(nums[l])+ to_string(nums[r]));
            l++;
            r--;
        }
        if(n%2==1)
        {
            re += nums[n/2];
        }

        return re;
    }
};