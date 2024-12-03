class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> tk;
        for(char c : s){
            if(c == '#'){
                if(!tk.empty()){
                    tk.pop();
                }
            }
            else {
                tk.push(c);
            }
        }
        stack<char> tk2;
        for(char c : t){
            if(c == '#'){
                if(!tk2.empty()){
                    tk2.pop();
                }
            }
            else tk2.push(c);
        }
        if(tk == tk2){
            return true;
        }
        else{
            return false;
        }
        
    }
};