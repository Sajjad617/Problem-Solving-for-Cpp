class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> re;
        while(n%k!=0)
        {
            s.push_back(fill);
            n = s.size();
        }
        int cnt = 0;
        string data = "";
        for(int i = 0; i<s.size(); i++)
        {
            data.push_back(s[i]);
            cnt++;
            if(cnt==k)
            {
                re.push_back(data);
                data = "";
                cnt = 0;
                
            }
        }
        return re;

    }
};