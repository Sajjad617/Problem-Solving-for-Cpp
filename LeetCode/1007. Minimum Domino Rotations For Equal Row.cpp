class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int n = tops.size();
            vector<int> cnt_top(7);
            vector<int> cnt_btm(7);
            vector<int> both(7);
    
            for(int i=0;i<n; i++)
            {
                ++cnt_top[tops[i]];
                ++cnt_btm[bottoms[i]];
                if(tops[i]==bottoms[i])
                    ++both[tops[i]];
                
            }
            for(int i=1;i<=6; i++)
            {
                if( cnt_top[i] + cnt_btm[i] - both[i]==n)
                    return n - max(cnt_top[i], cnt_btm[i]);
            }
            return -1;
            
        }
    };