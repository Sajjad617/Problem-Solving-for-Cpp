class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char x : s){
            if(!st.empty() && x == st.top())
                st.pop();
            else 
                st.push(x);
        }
        string ns = "";
        while(!st.empty()){
            ns += st.top();
            st.pop();
        }
        reverse(ns.begin(), ns.end());
        return ns;
    }
};