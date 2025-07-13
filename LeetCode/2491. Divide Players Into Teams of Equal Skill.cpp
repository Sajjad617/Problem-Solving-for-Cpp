class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long re = 0;
        int n = skill.size();
        int cal = skill[0]+skill[n-1];
        int l=0, r=n-1;
        while(l < r)
        {
            int cur = skill[l]+skill[r];

            if(cur!=cal)
                return -1;
            
            re += skill[l]*skill[r];
            l++;
            r--;
        } 
        return re;
    }
};