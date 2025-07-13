class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> re;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(abs(i-j) <= k && nums[j]==key)
                {
                    re.push_back(i);
                    break;
                }
            }
        }
        return re;
    }
};