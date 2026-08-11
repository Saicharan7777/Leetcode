class MinStack {
public:
    stack<int> q;
    stack<int> r;
    MinStack() {
        
    }
    
    void push(int value) {
      q.push(value);   
      if(r.empty() || value <= r.top()) {
        r.push(value);
      }

    }
    
    void pop() {
        if(q.top() == r.top()) {
            r.pop();
        }
        q.pop();
    }
    
    int top() {
        return q.top();
    }
    
    int getMin() {
        return r.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */