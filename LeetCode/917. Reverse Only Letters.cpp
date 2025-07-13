class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ns = "";
        for(int i = s.size()-1; i>=0; i--)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                ns.push_back(s[i]);
            }
            
        }
        int idx = 0;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                s[i] = ns[idx++];
            }
        }
        return s;
    }
};