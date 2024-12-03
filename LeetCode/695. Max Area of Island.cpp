class Solution {
public:
    bool vt[55][55];
    int cnt;
    int r, c;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool valid(int ci, int cj)
    {
        if(ci>=0 && ci<r && cj>=0 && cj<c)
            return true;
        else 
            return false;
    }
    void dfs(vector<vector<int>>& grid, int si, int sj)
    {
        vt[si][sj] = true;
        cnt++;
        for(int i=0; i<4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci, cj) && !vt[ci][cj] && grid[ci][cj]==1)
            {
                dfs(grid, ci, cj);
            }
        }

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        memset(vt, false, sizeof(vt));
        r = grid.size();
        c = grid[0].size();
        int mx = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(!vt[i][j] && grid[i][j]==1)
                {
                    cnt = 0;
                    dfs(grid, i, j);
                    mx = max(mx, cnt);
                    
                }
            }
        }

        return mx;

        
    }
};