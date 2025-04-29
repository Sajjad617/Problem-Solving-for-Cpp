class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            set<int> tk(nums.begin(), nums.end());
            int n = tk.size();
            int zero = tk.contains(0);
            return n-zero;
        }
    };