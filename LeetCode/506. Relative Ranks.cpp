class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score) {
            map<int, int> mp;
            priority_queue<int> pq;
            vector<string> v(score.size());
    
            for(int i=0; i<score.size(); i++)
            {
                pq.push(score[i]);
                mp[score[i]] = i;
            }
            int idx = 1;
            while(!pq.empty())
            {
                int x = pq.top();
                pq.pop();
    
                if(idx==1)
                {
                    v[mp[x]] = "Gold Medal";
                }
                else if(idx==2)
                {
                    v[mp[x]] = "Silver Medal";
                }
                else if(idx==3)
                {
                    v[mp[x]] = "Bronze Medal";
                }
                else
                {
                    v[mp[x]] = to_string(idx);
                }
                idx++;
                
            }
            return v;
        }
    };