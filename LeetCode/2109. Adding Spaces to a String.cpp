class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ns = "";
        for(int i=0, j=0 ; i<s.size(); i++)
        {
            if(j<spaces.size() && i==spaces[j]){
                j++;
                ns += ' ';
            }
            ns += s[i];
        }
        return ns;
    }
};