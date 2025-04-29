class Solution {
    public:
        vector<int> numberGame(vector<int>& nums) {
            // priority_queue<int, vector<int>,greater<int>> pq;
            priority_queue<int> pq;
            for(auto x : nums)
                pq.push(x);
    
            vector<int> v;
            while(!pq.empty())
            {
                int a = pq.top();
                pq.pop();
                int b = pq.top();
                pq.pop();
                v.push_back(b);
                v.push_back(a);
            }
            reverse(v.begin(), v.end());
            return v;
                       
        }
    };