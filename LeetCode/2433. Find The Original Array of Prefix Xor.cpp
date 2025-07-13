class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> data;
        int x = pref[0];
        data.push_back(x);
        for(int i =1; i<pref.size(); i++)
        {
            x = pref[i-1] ^ pref[i];
            data.push_back(x);
        }
        return data;
    }
};