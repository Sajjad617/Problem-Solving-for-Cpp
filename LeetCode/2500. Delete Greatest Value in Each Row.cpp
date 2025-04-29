class Solution {
    public:
        int deleteGreatestValue(vector<vector<int>>& grid) {
            for (auto& row : grid) {
                sort(row.begin(), row.end());
            }
          
            int total = 0;
    
            for (int j = 0; j < grid[0].size(); ++j) {
                int cal = 0; 
                for (int i = 0; i < grid.size(); ++i) {
                    cal = max(cal, grid[i][j]);
                }
    
                total += cal;
            }
          
            return total;
            // priority_queue<int> pq1;
            // priority_queue<int> pq2;
            // if(grid.size()==1)
            //     return grid[0][0];
            // for(auto x : grid[0])
            // {
            //     pq1.push(x);
            // }
            // for(auto x : grid[1])
            // {
            //     pq2.push(x);
            // }
            // int total = 0;
            // while(!pq1.empty())
            // {
            //     int a = pq1.top();
            //     pq1.pop();
            //     int b = pq2.top();
            //     pq2.pop();
            //     total += max(a, b);
            // }
            // return total;
        }
    };