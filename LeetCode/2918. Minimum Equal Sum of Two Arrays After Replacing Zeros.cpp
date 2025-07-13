class Solution {
    public:
        long long minSum(vector<int>& nums1, vector<int>& nums2) {
            long long z1 = 0;
            long long total1 = 0;
            for(auto x : nums1)
            {
                if(x==0)
                    z1++;
                else
                    total1 += x;
            }
            long long z2 = 0;
            long long total2 = 0;
            for(auto x : nums2)
            {
                if(x==0)
                    z2++;
                else
                    total2 += x;
            }
    
            if(z1==0 && total1 < total2+z2)
                return -1;
            else if(z2==0 && total2 < total1+z1)
                return -1;
            else
                return max(total1+z1, total2+z2);
        }
    };