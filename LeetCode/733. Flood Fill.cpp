class Solution {
public:

    void dfs(vector<vector<int>>&image, int sr, int sc, int color, int r, int c, int data){

        if(sr<0 || sr>=r || sc<0 || sc>=c)
            return;
        if(image[sr][sc]!=data)
            return;
        image[sr][sc] = color;
        dfs(image, sr+1, sc, color, r, c ,data);
        dfs(image, sr-1, sc, color, r, c ,data);
        dfs(image, sr, sc+1, color, r, c ,data);
        dfs(image, sr, sc-1, color, r, c ,data);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==image[sr][sc])
            return image;
        int r = image.size();
        int c = image[0].size();
        int data = image[sr][sc];
        dfs(image, sr, sc, color, r, c, data);
        return image;
    }
};