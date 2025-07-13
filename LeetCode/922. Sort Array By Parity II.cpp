class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> re(n);
        int odd = 1, even = 0;
        for(auto x : nums)
        {
            if(x%2==0){
                re[even] = x;
                even +=2;
            }
            else{
                re[odd] = x;
                odd +=2;
            }
        }
        
        return re;
    }
};