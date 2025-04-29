class Solution {
    public:
        int reverseDegree(string s) {
            vector<int> v;
            for(auto x : s)
            {
                int cal = 26-(x-'a');
                v.push_back(cal);
            }
            int total = 0;
            for(int i=0; i<v.size(); i++)
            {
                total += v[i]*(i+1);
            }
            return total;
    
        }
    };