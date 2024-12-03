class Solution {
public:
    vector<int> v[200005];
    bool vt[200005];
    void dfs(int s)
    {
        vt[s] = true;
        for(auto child : v[s])
        {
            if(!vt[child])
                dfs(child);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(vt, false, sizeof(vt));
        for(int i=0; i<edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(source);
        if(vt[destination])
            return true;
        else 
            return false;
        // return vt[destination];
    }
};