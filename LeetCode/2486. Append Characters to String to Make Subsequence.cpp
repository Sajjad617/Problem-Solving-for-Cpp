class Solution {
public:
    int appendCharacters(string s, string t) {
        int i =0;
        int tn = t.size();
        for(auto x : s)
        {
            if(x==t[i])
            {
                if(++i==tn)
                    return 0;
            }
        }
        return tn-i;
    }
};