class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> re;
        for(int i=0; i<words.size(); i++)
        {
            string s = words[i];
            if(s.find(x)<= s.size())
                re.push_back(i);
        }
        return re;
    }
};