class MinStack {
public:
    vector<int>p;
    priority_queue <int, vector<int>, greater<int> > q;
    MinStack() {
    }
    
    void push(int val) {
        p.push_back(val);
        q.push(val);
    }
    void pop() {        
        if(q.top()==p.back())
        {
            cout<<q.top()<<'\n';
            q.pop();
        }
        p.pop_back();
    }
    
    int top() {
        return p.back();
    }
    
    int getMin() {
        while(find(p.begin(),p.end(),q.top())==p.end())
        {
            q.pop();
        }
        return q.top();
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