class Solution {
public:
    int maxDiff(int num) {

        string data = to_string(num); 
        string mx = data;
        string mn = data;

        char rep = ' ';

        for(auto c : data)
        {
            if(c != '9')
            {
                for(char &ch : mx)
                {
                    if(ch == c)
                        ch = '9';
                }
                break;
            }
        }

        if(data[0] != '1')
        {
            rep = data[0];
            for(char &x : mn)
            {
                if(x==rep){
                    x = '1';
                }
            }
        }
        else
        {
            for(int i=1; i<data.size(); i++)
            {
                if(data[i] != '0' && data[i] != '1')
                {
                    rep = data[i];
                    for(char& x : mn)
                    {
                        if(rep == x)
                            x = '0';
                    }
                    break;
                }
            }
        }

        int mxv = stoi(mx);
        int mnv = stoi(mn);
        return mxv - mnv;
        
    }
};