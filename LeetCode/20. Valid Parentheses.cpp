class Solution {
public:
    bool isValid(string s) {
        stack<char> tk;
        for(char c : s){
            if( c=='(' || c=='{' || c=='[' ){
                tk.push(c);
            }
            else{
                if(tk.empty()) return false;

                else{
                    if( c==')' && tk.top() == '('){
                        tk.pop();
                    }
                    else if(c=='}' && tk.top() == '{'){
                        tk.pop();
                    }
                    else if(c==']' && tk.top() == '['){
                        tk.pop();
                    }
                    else{
                        return false;
                    }
                }
                 
            }
            
        }
        return tk.empty();
    }   

};