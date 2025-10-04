class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int cnt = n-1;
        long long total = 0;
        int l = 0, r = n-1;
        while(l<r)
        {
            int mn = min(height[l], height[r]);
            total = max(total, (mn*cnt)*1LL);
            if(mn==height[l])
                l++;
            else
                r--;
            cnt--;
        }
        return total;
    }
};