class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long ans = 0;
            int mxDiff = 0;
            int mxNum = 0;
    
            for ( int num : nums) {
            ans = max(ans, static_cast<long>(mxDiff) * num);
            mxDiff = max(mxDiff, mxNum - num);
            mxNum = max(mxNum, num);
            }
    
            return ans;
        }
    };