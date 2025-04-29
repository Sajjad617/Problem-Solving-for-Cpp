class Solution {
    public:
        int numberOfArrays(vector<int>& differences, int lower, int upper) {
            long long cal = 0, mn = 0, mx = 0;
            for(auto x : differences)
            {
                cal += x;
                mn = min(cal, mn);
                mx = max(cal, mx);
            }
            return max(upper-lower-(mx-mn)+1, 0LL);
        }
    };