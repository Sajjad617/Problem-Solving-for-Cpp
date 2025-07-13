class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            int cal = 0;
            if(nums[i]>9)
            {
                 
                 int x = nums[i];
                 while(x)
                 {
                     cal += x%10;
                     x /=10;
                 }    
            }
            else
            {
               cal = nums[i]; 
            }
            if(i==cal)
                return i;
        }
        return -1;
    }
};