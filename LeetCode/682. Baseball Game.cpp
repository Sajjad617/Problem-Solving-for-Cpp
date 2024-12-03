class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string x : operations)
        {
            if( x == "+"){
                int pre1 = st.top();
                st.pop();
                int pre2 = st.top(); 
                st.push(pre1);
                st.push(pre1 + pre2);
            }
            else if( x == "D"){
                int v = 2*st.top();
                st.push(v);
            }
            else if(x == "C"){
                st.pop();
            }
            else{
                st.push(stoi(x));
            }
        }

        int sum = 0;
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};