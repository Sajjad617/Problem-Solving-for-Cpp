public class Solution {
    public int CountSubstrings(string s) {
        int cnt= 0;
        int n = s.length();
        
        for(int i=0; i<2*n-1; i++)
        {
            int l = i/2;
            int r = l+i%2;

            while(l >= 0 && r < n && s[l]==s[r])
            {
                cnt++;
                l--;
                r++;
            }
        }
        return cnt;
    }
}