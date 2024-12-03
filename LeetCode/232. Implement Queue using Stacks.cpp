class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }

    
    int pop() {
        stack<int> nst;
        int top;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty()){
                top = k;
                break;
            }
            nst.push(k);
        }
        while(!nst.empty()){
            st.push(nst.top());
            nst.pop();
        }
        return top;
        
    }
    
    int peek() {
        stack<int> nst;
        int top;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty()){
                top = k;
            }
            nst.push(k);
        }
        while(!nst.empty()){
            st.push(nst.top());
            nst.pop();
        }
        return top;

        
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */