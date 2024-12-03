class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for(int x : nums)
        {
            if (x >= j)
            {
                i = j;
                j = x;
            }
            else if(x > i && x < j)
            {
                i = x;
            }
        }
        int cal = (i-1)*(j-1);
        return cal;
    }
};