class MyQueue {
public:
    stack<int>p;
    stack<int>q;
    MyQueue() {   
    }
    void push(int x) {
        if(p.empty())
        {
            p.push(x);
        }
        else
        {
            while(!p.empty())
            {
                q.push(p.top());
                p.pop();
            }
            p.push(x);
            while(!q.empty())
            {
                p.push(q.top());
                q.pop();
            }
        }
    }
    
    int pop() {
        int x = p.top();
        p.pop();
        return x;
    }
    
    int peek() {
        return p.top();
        
    }
    
    bool empty() {
        return p.empty();
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