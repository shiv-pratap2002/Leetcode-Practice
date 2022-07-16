class MyStack {
public:
    queue<int>q;
        queue<int>p;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop(){
        int pop;
        while(q.size()>1)
        {
            p.push(q.front());
            q.pop();
        }
            pop = q.front();
            q.pop();
        while(p.size()>=1)
        {
            q.push(p.front());
            p.pop();
        }
    return pop;
    }
    
    int top() {
        if(q.size()>0)
        return q.back();
        else
            return p.back();
    }
    
    bool empty() {
       if(q.size()==0)
       {
           return true;
       }
        
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */