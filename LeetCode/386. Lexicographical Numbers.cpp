class Solution {
    void dfs(int cur, int& n, vector<int>& re)
    {
        if(cur>n) return;

        re.push_back(cur);
        
        for(int i=0; i<=9; i++)
            dfs(cur*10+i, n, re);
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> re;
        for(int i=1; i<=9; i++)
        {
            dfs(i, n, re);
        }
        return re;
    }
};