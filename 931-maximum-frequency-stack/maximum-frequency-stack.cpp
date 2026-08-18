class FreqStack {
public:
    unordered_map<int, int> f;
    unordered_map<int, stack<int>> g;
    int max_freq = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        int v = f[val]++;
        max_freq = max(max_freq, v);
        g[v].push(val);
    }
    
    int pop() {
        int v = g[max_freq].top();
        g[max_freq].pop();
        f[v]--;

        if(g[max_freq].empty()) {
            max_freq--;
        }
        return v;
    }    
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */