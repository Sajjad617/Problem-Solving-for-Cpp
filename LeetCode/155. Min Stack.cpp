class MinStack {
public:
    stack<int>main,mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(main.empty()){
            main.push(val);
            mn.push(val);
            return;
        }
        int minval = min(val, mn.top());
        mn.push(minval);
        main.push(val);
        
    }
    
    void pop() {
        if(main.empty()) return;
        mn.pop();
        main.pop();
    }
    
    int top() {
        return main.top();
        
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */